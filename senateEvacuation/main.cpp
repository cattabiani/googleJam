#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Party
{
    char name;
    size_t P;
};

void evacuate(vector<Party>& senate, size_t i)
{
    --senate.at(i).P;
    cout << senate.at(i).name << ' ';
}

void evacuate2(vector<Party>& senate)
{
    --senate.at(0).P;
    --senate.at(1).P;
    cout << senate.at(0).name << senate.at(1).name << ' ';
}

int main(int argc, char **argv) 
{
    size_t nT;
    cin >> nT;
    
    for (size_t iT = 1; iT <= nT; ++iT)
    {
        size_t N;
        cin >> N;
        
        vector<Party> senate(N);
        
        char newName = 'A';
        for (size_t i = 0; i < N; ++i)
        {
            senate.at(i).name = newName++;
            cin >> senate.at(i).P;
            //cout << newName;
        }
        
        sort(senate.begin(), senate.end(), [](const Party & a, const Party & b)
        { 
            return a.P > b.P; 
        }); 
        
        cout << "Case #" << iT << ": ";
        
        // evacuate the stronghest party until it is equal to the second
        while (senate.at(0).P > senate.at(1).P)
        {
            evacuate(senate, 0);
        }
        
        // evacuate the small parties
        for (size_t i = N-1; i > 1; --i)
        {
            while (senate.at(i).P > 0)
                evacuate(senate, i);
        }
        
        // evacuate the two big parties
        while (senate.at(0).P > 0)
        {
            evacuate2(senate);
        }
        cout << endl;
        /*
        for (auto i : senate)
            cout << endl << i.name << ' ' << i.P << endl;
        */
    }
    
    return 0;
}