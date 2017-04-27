#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        double C ,F, X;
        cin >> C >> F >> X;
        
        double v = 2.0;
        double tnow = 0.0;
        bool tminFound = false;
        double tmin = 0;
        while (!tminFound)
        {
            
            double tNoNewF = tnow + X / v;
            
            double tNewF = tnow + C / v + X / (v + F);
            
            if (tNewF < tNoNewF)
            {
                tnow += C / v;
                v += F;
            }
            else
            {
                tmin = tNoNewF;
                tminFound = true;
            }
        }
        cout << fixed;
        cout << "Case #" << iT << ": " << setprecision(7) << tmin << endl;
    }
    
    return 0;
}
