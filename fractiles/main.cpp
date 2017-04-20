#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int T, K , C , S;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        cin >> K;
        cin >> C;
        cin >> S;
        
        cout << "Case #" << iT << ":";
        
        if (K > C*S)
        {
            cout << " IMPOSSIBLE";
        }
        else
        {
            //int rest = 0;
            //if (K/C != 0) rest = 1;
            
            for (int iTr = 0; iTr < (K-1)/C + 1; ++iTr)
            {
                int iK = iTr;
                unsigned long long int sum = 1;
                for (int iC = C-1; iC >= 0; --iC)
                {
                    unsigned long long int sumOld = sum;
                    sum += pow(K, iC) * iK;
                    
                    if (sumOld > sum)
                        cout << "porcoDio" << endl;
                    
                    //cout << iK << endl;
                    
                    
                    iK += K/C + 1;
                    
                    iK %= K;
                    

                }
                
                cout << ' ' << sum;

            }
        }
        cout << endl;
    }
    
    return 0;
}
