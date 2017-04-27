#include <iostream>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        int R, C, M;
        cin >> R >> C >> M;
        
        cout << "Case #" << iT << ":" << endl;
        
        const int holes = R * C - M;
        if (holes == 1)
        {
            for (int i = 0; i < R; ++i)
            {
                for (int j = 0; j < C; ++j)
                {
                    if (i == 0 && j == 0)
                        cout << 'c';
                    else
                        cout << '*';
                }
                cout << endl;
            }
        }
        else if  (R == 1 || C == 1)
        {
            int nHoles = 0;
            for (int i = 0; i < R; ++i)
            {
                for (int j = 0; j < C; ++j)
                {
                    if (i == 0 && j == 0)
                    {
                        cout << 'c';
                        ++nHoles;
                    }
                    else if (nHoles < holes)
                    {
                        cout << '.';
                        ++nHoles;
                    }
                    else
                        cout << '*';
                }
                cout << endl;
            }
        }
        else if (holes % 2 == 0 && holes != 2)
        {
            int nHoles = 0;
            for (int i = 0; i < R; ++i)
            {
                for (int j = 0; j < C; ++j)
                {
                    if (i == 0 && j == 0)
                    {
                        cout << 'c';
                        ++nHoles;
                    }
                    else if (nHoles < holes &&
                             j < holes/2 && 
                             !(j == C-1 && nHoles == holes -2))
                    {
                        
                        cout << '.';
                        ++nHoles;
                        
                    }
                    else
                    {
                        cout << '*';
                    }
                }
                cout << endl;
            }
        }
        else if (holes % 2 == 1 && min(R, C) >= 3 && holes >= 9)
        {
            const int remHoles = holes - 9;
            int nHoles = 0;
            for (int i = 0; i < R; ++i)
            {
                for (int j = 0; j < C; ++j)
                {
                    if (i == 0 && j == 0)
                    {
                        cout << 'c';
                    }
                    else if (i < 3 && j < 3)
                    {
                        cout << '.';
                    }
                    else if (nHoles < remHoles &&
                             j < remHoles/2 + 3 && 
                             !(j == C-1 && nHoles == remHoles -2))
                    {
                        
                        cout << '.';
                        ++nHoles;
                        
                    }
                    else
                    {
                        cout << '*';
                    }
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Impossible" << endl;
        }
        
    }
    return 0;
}
