#include <iostream>
#include <map>

using namespace std;

void AddPstack(map<int, int>& Pstacks, int pStackSize, int customers)
{
    if (Pstacks.empty() || Pstacks.find(pStackSize) == Pstacks.end())
    {
        Pstacks.insert(pair<int,int>(pStackSize,customers) );
    }
    else
    {
        Pstacks.at(pStackSize) += customers;
    }
}

void print(map<int, int> Pstacks)
{
    cout << endl << "P stack: " << endl;
    for (auto iP = Pstacks.begin(); iP != Pstacks.end(); ++iP)
    {
        cout << iP->first << ' ' << iP->second << endl;
    }
    cout << endl;
}


int main() 
{
    bool debug = true;
    
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        int D;
        cin >> D;
        
        // fill the map
        map<int, int> Pstacks;
        
        for(int iD = 0; iD < D; ++iD)
        {
            int pStackSize;
            cin >> pStackSize;
            AddPstack(Pstacks, pStackSize, 1);
        }
        
        
        int oldSplits = 0;
        int T = Pstacks.rbegin()->first;
        
        //print(Pstacks);
        
        while (Pstacks.rbegin()->first != 1)
        {
            // split
            oldSplits += Pstacks.rbegin()->second;
            
            
            
            if (Pstacks.rbegin()->first % 2 == 0)
            {
                AddPstack(Pstacks, Pstacks.rbegin()->first/2, Pstacks.rbegin()->second*2);
            }
            else
            {
                AddPstack(Pstacks, Pstacks.rbegin()->first/2, Pstacks.rbegin()->second);
                AddPstack(Pstacks, Pstacks.rbegin()->first/2 + 1, Pstacks.rbegin()->second);
            }
            Pstacks.erase(--Pstacks.end());
            
            int newT = oldSplits + Pstacks.rbegin()->first;
            
            if (newT<T)
            {
                T = newT;
            }
        }
        
        cout << "Case #" << iT << ": " << T << endl;
        
    }
    
    return 0;
}
