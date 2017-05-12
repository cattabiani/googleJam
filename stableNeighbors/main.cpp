#include <iostream>
#include <string>

using namespace std;

bool ckColors(char a, char b)
{
    if (a == b) return false;
        
    if (a == 'G' && b != 'R') return false;
    if (b == 'G' && a != 'R') return false;
    if (a == 'V' && b != 'Y') return false;
    if (b == 'V' && a != 'Y') return false;
    if (a == 'O' && b != 'B') return false;
    if (b == 'O' && a != 'B') return false;

    return true;
}


int main() 
{
    uint T;
    cin >> T;
    for (uint iT =1; iT<=T; ++iT)
    {
        uint N, R, O, Y, G, B, V;
        cin >> N >> R >> O >> Y >> G >> B >> V;
        
        //cout << N << ' ' << R << ' ' << O << ' ' << Y << ' ' << G << ' ' << B << ' ' << V << endl;
        
        cout << "Case #" << iT << ": ";
        
        string out;
        
        if (2*R == N && 2*G == N)
        {
            out.resize(N);
            for (uint i = 0; i < N/2; ++i)
            {
                out.at(2*i) = 'G';
                out.at(2*i+1) = 'R';
            }
        }
        else if (2*Y == N && 2*V == N)
        {
            out.resize(N);
            for (uint i = 0; i < N/2; ++i)
            {
                out.at(2*i) = 'V';
                out.at(2*i+1) = 'Y';
            }
        }
        else if (2*B == N && 2*O == N)
        {
            out.resize(N);
            for (uint i = 0; i < N/2; ++i)
            {
                out.at(2*i) = 'B';
                out.at(2*i+1) = 'O';
            }
        }
        else if (R - G <= N/2 - G - V - O &&
                 Y - V <= N/2 - G - V - O &&
                 B - O <= N/2 - G - V - O &&
                 R >= G + 1 &&
                 Y >= V + 1 &&
                 B >= O + 1)
        {
            
            out.resize(N);
        
            uint i = 0;
            
            if (G > 0 || R > 0)
            {
                out.at(i++) = 'R';
                --R;
            }
            while (G > 0)
            {
                out.at(i++) = 'G';
                --G;
                out.at(i++) = 'R';
                --R;
            }
            
            if (O > 0 || B > 0)
            {
                out.at(i++) = 'B';
                --B;
            }
            while (O > 0)
            {
                out.at(i++) = 'O';
                --O;
                out.at(i++) = 'B';
                --B;
            }
            
            if (V > 0 || Y > 0)
            {
                out.at(i++) = 'Y';
                --Y;
            }
            while (V > 0)
            {
                out.at(i++) = 'V';
                --V;
                out.at(i++) = 'Y';
                --Y;
            }
            /*
            if (i == 0)
            {
                if (R > 0)
                {
                    out.at(i++) = 'R';
                    --R;
                } 
                else if (B > 0)
                {
                    out.at(i++) = 'B';
                    --B;
                }
                else
                {
                    out.at(i++) = 'Y';
                    --Y;
                }
            }
            */
            while (i < N)
            {
                switch (out.at(i-1))
                {
                    case 'R' :
                    {
                        if (B >= Y && B > 0)
                        {
                            out.at(i++) = 'B';
                            --B;
                        }
                        else
                        {
                            out.at(i++) = 'Y';
                            --Y;
                        }
                        break;
                    }
                    case 'B' :
                    {
                        if (R >= Y && R > 0)
                        {
                            out.at(i++) = 'R';
                            --R;
                        }
                        else
                        {
                            out.at(i++) = 'Y';
                            --Y;
                        }
                        break;
                    }
                    case 'Y' :
                    {
                        if (R >= B && R > 0)
                        {
                            out.at(i++) = 'R';
                            --R;
                        }
                        else
                        {
                            out.at(i++) = 'B';
                            --B;
                        }
                        break;
                    }
                }
            }
            
            if (!ckColors(out.at(0), out.at(N-1)))
            {
                char tmp = out.at(N-1);
                uint i = 1;
                for (; i < N; ++i)
                {
                    if (ckColors(out.at(i), tmp) && ckColors(out.at(i-1), tmp))
                    {
                        break;
                    }
                }
                for (; i < N; ++i)
                {
                    char tmp1 = out.at(i);
                    out.at(i) = tmp;
                    tmp = tmp1;
                }
            }
        }
        else
        {
            out = "IMPOSSIBLE";
        }
        
        cout << out << endl;
        
        // check
        
        if (out != "IMPOSSIBLE")
        {
            bool checkPassed = ckColors(out.at(0), out.at(N-1));
            if (!checkPassed)
            {
                cout << "check not passed:" << endl;
                cout << 0 << ' ' << N << endl;
                cout << out.at(0) << ' ' << out.at(N-1) << endl;
                return 0;
            }
            else
            {
                for (uint i = 1; i < N; ++i)
                {
                    checkPassed = ckColors(out.at(i), out.at(i-1));
                    if (!checkPassed)
                    {
                        cout << "check not passed" << endl;
                        cout << out.at(i) << ' ' << out.at(i-1) << endl;
                        return 0;
                    }
                }
            }
        }
        
    }
    
    
    return 0;
}
