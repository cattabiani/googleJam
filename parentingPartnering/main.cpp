#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

size_t schedule(string& dayS, const size_t S, const size_t E, char who)
{
    size_t counter = 0;
    for (size_t i = S; i != E; i = (i+1)%1440)
    {
        dayS.at(i) = who;
        ++counter;
    }
    return counter;
}

struct App
{
    size_t D() { return E >S ? E-S : E + (1440 - S); }
    size_t S;
    size_t E;
    char who;
};

struct FreeTime
{
    size_t D() { return E >S ? E-S : E + (1440 - S); }
    size_t idS;
    size_t idE;
    size_t S;
    size_t E;
    char whoS;
    char whoE;
};

int main() 
{
    size_t nT;
    cin >> nT;
    
    for (size_t iT = 1; iT <= nT; ++iT)
    {
        size_t Ac, Aj;
        cin >> Ac;
        cin >> Aj;
        
        string dayS(1440,'F');
        size_t Ctime = 0;
        size_t Jtime = 0;
        
        vector<App> day(Ac + Aj);
        day.reserve(200);
        
        for (size_t i = 0; i < Ac; ++i)
        {
            App newApp;
            size_t S, E;
            cin >> S;
            cin >> E;
            newApp.S = S%1440; 
            newApp.E = E%1440;
            newApp.who = 'C';
            Ctime += newApp.D();
            
            day.at(i) = newApp;
            
            schedule(dayS, newApp.S, newApp.E, 'C');
        }
        
        for (size_t i = Ac; i < Ac + Aj; ++i)
        {
            App newApp;
            size_t S, E;
            cin >> S;
            cin >> E;
            newApp.S = S%1440; 
            newApp.E = E%1440;
            newApp.who = 'J';
            Jtime += newApp.D();
            
            day.at(i) = newApp;
            
            schedule(dayS, newApp.S, newApp.E, 'J');
        }
        
        
        
        if (Ac + Aj == 0)
        {
            cout << "Case #" << iT << ": 2" << endl;
            continue;
        }
        
        sort(day.begin(), day.end(),
        [](const App & a, const App & b)
        { 
            return a.S < b.S; 
        });
        
        vector<FreeTime> freeTime(Ac + Aj);
        size_t oldi = Ac + Aj -1;
        
        for (size_t i = 0; i < Ac + Aj; ++i)
        {
            FreeTime newFreeTime;
            newFreeTime.S = day.at(oldi).E;
            newFreeTime.E = day.at(i).S;
            newFreeTime.idS = oldi;
            newFreeTime.idE = i;
            newFreeTime.whoS = day.at(oldi).who;
            newFreeTime.whoE = day.at(i).who;
            
            freeTime.at(i) = newFreeTime;

            oldi = i;
        }
        
        
        
        
        sort(freeTime.begin(), freeTime.end(),
        [](FreeTime & a, FreeTime & b)
        { 
            return a.D() < b.D(); 
        });
        
        //cout << dayS << endl;
        
        for (auto i : freeTime)
        {
            if (i.whoS == 'C' &&
                i.whoE == 'C')
            {
                if (i.D() + Ctime < 720)
                {
                    Ctime += schedule(dayS, i.S, i.E, 'C');
                }
                /*
                else
                {
                    size_t cut = (i.S + 720 - Ctime)%1440;
                    Ctime += schedule(dayS, i.S, cut, 'C');
                    Jtime += schedule(dayS, cut, i.E, 'J');
                }
                */
            } 
            else if (i.whoS == 'J' &&
                     i.whoE == 'J')
            {
                if (i.D() + Jtime < 720)
                {
                    Jtime += schedule(dayS, i.S, i.E, 'J');
                }
                /*
                else
                {
                    size_t cut = (i.S + 720 - Jtime)%1440;
                    Jtime += schedule(dayS, i.S, cut, 'J');
                    Ctime += schedule(dayS, cut, i.E, 'C');
                }
                */
            } 
        }
        
        //cout << dayS << endl;
        char oldC = dayS.at(1439);
        size_t i = 0;
        while (Jtime < 720 || Ctime < 720)
        {
            if (dayS.at(i) == 'F')
            {
                if (oldC == 'C' && Ctime < 720)
                {
                    dayS.at(i) = 'C';
                    ++Ctime;
                }
                else if (oldC == 'J' && Jtime < 720)
                {
                    dayS.at(i) = 'J';
                    ++Jtime;
                }
                else if (Ctime == 720)
                {
                    dayS.at(i) = 'J';
                    ++Jtime;
                }
                else if (Jtime == 720)
                {
                    dayS.at(i) = 'C';
                    ++Ctime;
                }
            }
            
            
            oldC = dayS.at(i);
            //cout << oldC << ' ' << Ctime << ' ' << Jtime;
            i = (i+1)%1440;
        }

        
        /*
        
        
        for (auto i : freeTime)
        {
            if (i.whoS == 'C' &&
                i.whoE == 'J')
            {
                if (i.D() + Ctime < 720)
                {
                    Ctime += schedule(dayS, i.S, i.E, 'C');
                }
                else
                {
                    size_t cut = (i.S + 720 - Ctime)%1440;
                    Ctime += schedule(dayS, i.S, cut, 'C');
                    Jtime += schedule(dayS, cut, i.E, 'J');
                }
            } 
            else if (i.whoS == 'J' &&
                     i.whoE == 'C')
            {
                if (i.D() + Jtime < 720)
                {
                    Jtime += schedule(dayS, i.S, i.E, 'J');
                }
                else
                {
                    size_t cut = (i.S + 720 - Jtime)%1440;
                    Jtime += schedule(dayS, i.S, cut, 'J');
                    Ctime += schedule(dayS, cut, i.E, 'C');
                }
            } 
        }
        */
        size_t nChanges = 0;
        oldC = dayS.at(1439);
        for (auto i : dayS)
        {
            if (oldC != i)
                ++nChanges;
            
            if (i == 'F') 
            {
                cout << endl;
                cout << "Still free time" << endl;
                break;
            }
            
            oldC = i;
        }
        
        
        //for (auto i : freeTime) cout << i.whoS << ' ' << i.whoE;
        //for (auto i : freeTime) cout << i.S << ' ';
        //cout << endl;
        //for (auto i : day) cout << i.D() << ' ';
        //cout << endl;
        //for (auto i : freeTime) cout << i.D() << ' ';
/*
        cout << endl;
        cout << dayS;
        cout << endl;
        int Jtime_ck = 0;
        int Ctime_ck = 0;
        for (auto i : dayS) 
        {
            if (i == 'J')
                ++Jtime_ck;
            else if (i == 'C')
                ++Ctime_ck;
            else
            {
                cout << "Something is not assigned?\n";
                break;
            }
        }
        
        
        cout << Jtime_ck << ' ' << Ctime_ck;
        cout << endl;
        */

        cout << "Case #" << iT << ": " << nChanges << endl;
        

    }
    
    
    return 0;
}
