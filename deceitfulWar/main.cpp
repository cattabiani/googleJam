#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        int N;
        cin >> N;
        
        vector<double> bn(N,0);
        for (int i =0; i<N; ++i)
        {
            cin >> bn[i];
        }
        sort(bn.begin(), bn.end());
        
         vector<double> bk(N,0);
        for (int i =0; i<N; ++i)
        {
            cin >> bk[i];
        }
        sort(bk.begin(), bk.end());
        // war
        int ik = 0;
        int kwinsW = 0;
        for (int in = 0; in < N; ++in)
        {
            for ( ; ik < N; ++ik)
            {
                if (bk[ik] > bn[in])
                {
                    ++ik;
                    ++kwinsW;
                    break;
                }
            }
        }
        int nwinsW = N - kwinsW;
        
        // deceitful war
        int in = 0;
        int nwinsDW = 0;
        for (int ik = 0; ik < N; ++ik)
        {
            for ( ; in < N; ++in)
            {
                if (bn[in] > bk[ik])
                {
                    ++in;
                    ++nwinsDW;
                    break;
                }
            }
        }
        
        cout << "Case #" << iT << ": " << nwinsDW << ' ' << nwinsW << endl;

        //for (auto i : bn) cout << i << ' ';
        //cout << endl;
        //for (auto i : bk) cout << i << ' ';
        //c
       o ut << endl;
        
    }
    
    
    return 0;
}
