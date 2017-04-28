#include <iostream>
#include <vector>
#include <list>
#include <iomanip>

using namespace std;

struct Horse
{
public : 
    // horse range (km)
    double E;
    // horse speed (km/h)
    double S;

};

struct CityPair
{
public : 
    // start
    int U;
    // end
    int V;
};

struct ConTable
{
public :
    ConTable(const int N_) : N(N_), storage(N_ * N_) {}
    
    ConTable(const int N_, const double val_) : N(N_), storage(N_ * N_, val_) {}
    
    inline double& at(const int i, const int j) { return storage.at(i* N + j); }
    
    int N;
    vector<double> storage;
};

int main() 
{
    int nTest;
    cin >> nTest;
    
    for (int iTest = 1; iTest <= nTest; ++iTest)
    {
        // take the input
        int N, Q;
        cin >> N >> Q;
        
        vector<Horse> horseList(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> horseList.at(i).E >> horseList.at(i).S;
        }
        
        ConTable cityCT(N);
        for (int i = 0; i < N*N; ++i)
        {
                cin >> cityCT.storage.at(i);
        }
        
        vector<CityPair> cityPairList(Q);
        for (int i = 0; i < Q; ++i)
        {
            cin >> cityPairList.at(i).U >> cityPairList.at(i).V;
        }
        
        // create the horse, time travel weights graph
        ConTable horseCT(N, -1);
        for (int ih = 0; ih < N; ++ih)
        {
            const double E = horseList.at(ih).E;
            const double S = horseList.at(ih).S;
            const double T = E/S;
            list<int> kid;
            kid.push_back(ih);
            horseCT.at(ih, ih) = 0;
            for (auto ik = kid.begin(); ik != kid.end(); ++ik)
            {
                const double tSpent = horseCT.at(ih, *ik);
                for (int ic = 0; ic < N; ++ic)
                {
                    const double addE = cityCT.at(*ik, ic);
                    if (addE != -1)
                    {
                        const double newTweight = addE/S + tSpent;
                        if (newTweight <= T &&
                            (newTweight < horseCT.at(ih, ic) || horseCT.at(ih, ic) == -1) )
                        {
                            horseCT.at(ih, ic) = newTweight;
                            kid.push_back(ic);
                        }
                    }
                    
                }
            }
        }
        // get rid of the auto interactions to not create infinite loops
        for (int ih = 0; ih < N; ++ih) horseCT.at(ih, ih) = -1;
        
        // create the full city, time travel weights graph
        ConTable cityTimeCT(N, -1);
        for (int ict = 0; ict < N; ++ict)
        {
            list<int> kid;
            kid.push_back(ict);
            cityTimeCT.at(ict, ict) = 0;
            for (auto ik = kid.begin(); ik != kid.end(); ++ik)
            {
                const double tSpent = cityTimeCT.at(ict, *ik);
                for (int ih = 0; ih < N; ++ih)
                {
                    const double addT = horseCT.at(*ik, ih);
                    
                    //cout << addT << endl;
                    
                    if (addT != -1)
                    {
                        const double newTweight = addT + tSpent;
                        if ((newTweight < cityTimeCT.at(ict, ih) || cityTimeCT.at(ict, ih) == -1) )
                        {
                            cityTimeCT.at(ict, ih) = newTweight;
                            kid.push_back(ih);
                        }
                    }
                }
            }
        }
        // we do not need to get rid of the auto interactions
        //for (int ic = 0; ic < N; ++ic) cityTimeCT.at(ic, ic) = -1;
        
        //print the required solutions
        cout << "Case #" << iTest << ": ";
        for (auto iq : cityPairList)
        {
            cout << fixed;
            cout << setprecision(7) << cityTimeCT.at(iq.U-1, iq.V-1) << ' ';
        }
        cout << endl;
        
        // debugging stuff
        // print
        /*
        for (auto i : horseList) cout << i.E << ' ' << i.S << endl;
        for (int i = 0; i < N; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                cout << cityCT.at(i, j) << ' ';
            }
            cout << endl;
        }
        for (auto i : cityPairList) cout << i.U << ' ' << i.V << endl;
                
        cout << fixed;
        for (int i = 0; i < N; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                cout << setprecision(6) << horseCT.at(i, j) << ' ';
            }
            cout << endl;
        }

        cout << fixed;
        for (int i = 0; i < N; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                cout << setprecision(6) << cityTimeCT.at(i, j) << ' ';
            }
            cout << endl;
        }
        */
    }
    return 0;
}
