#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    uint nTest;
    cin >> nTest;
    for (uint iTest = 1; iTest <= nTest; ++iTest)
    {
        double D;
        cin >> D;
        uint N;
        cin >> N;
        
        double maxT = -1;
        for (uint i = 0; i < N; ++i)
        {
            double K, S;
            cin >> K >> S;
            
            double newT = (D-K)/S;
            if (maxT == -1 || newT > maxT)
            {
                maxT = newT;
            }
        }
        cout << fixed;
        cout << "Case #" << iTest << ": " << setprecision(7) << D/maxT << endl;
    }
    return 0;
}
