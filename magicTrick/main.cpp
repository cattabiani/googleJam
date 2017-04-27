#include <iostream>
#include <vector>

using namespace std;


vector<int> extLine(int row)
{
    int trash;
    vector<int> sol(4);
    for (int i = 0; i<4; ++i)
    {
        for (int j = 0; j <4; ++j)
        {
            if (row-1 == i)
            {
                cin >> sol[j];
            }
            else
            {
                cin >> trash;
            }
        }
    }
    return sol;
}

int main() 
{
    
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; iT++)
    {
        int r1;
        cin >> r1;
        vector<int> v1 = extLine(r1);
        
        int r2;
        cin >> r2;
        vector<int> v2 = extLine(r2);
        
        int nMatches = 0;
        int sol = 0;
        for (int i = 0; i<4; ++i)
        {
            for (int j = 0; j <4; ++j)
            {
                if (v1[i] == v2[j])
                {
                    sol = v1[i];
                    ++nMatches;
                }
            }
        }
        
        cout << "Case #" << iT << ": ";
        
        switch (nMatches)
        {
            case 1 :
            {
                cout << sol << endl;
                break;
            }
            case 0 :
            {
                cout << "Volunteer cheated!" << endl;
                break;
            }
            default :
            {
                cout << "Bad magician!" << endl;
                break;
            }
        }
    }
    
    return 0;
}
