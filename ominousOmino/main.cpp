#include <iostream>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        int X, R, C;
        cin >> X >> R >> C;
        
        cout << "Case #" << iT << ": ";
        
        if (X >= 7 ||
            (X-1)/2 + 1 > min(R, C) ||
            (R * C)%X != 0 ||
            (X == 5 && min(R, C) == 3 && max(R, C) == 5)
        )
        {
            cout << "RICHARD" << endl;
        }
        else
        {
            cout << "GABRIEL" << endl;
        }
    }
    
    return 0;
}
