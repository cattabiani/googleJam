#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

struct Pancake
{
    Pancake() {}
    void set(double R_, double H_)
    { 
        //cout << R_ << H_<< endl;
        
        R = R_;
        H = H_; 
        Ar = M_PI * R_ * R_;
        Ah = 2 * M_PI * R_ * H_; 
    }
    uint id;
    double R;
    double H;
    double Ar;
    double Ah;
};

int main() 
{
    uint nT;
    cin >> nT;
    
    for (uint iT = 1; iT <= nT; ++iT)
    {
        uint N, K;
        cin >> N >> K;
        vector<Pancake> pAh(N);
        for (uint i = 0; i < N; ++i) 
        {
            double R, H;
            cin >> R >> H;
            pAh.at(i).set(R, H);
        }
        
        sort(pAh.begin(), pAh.end(), 
            [](const Pancake & a, const Pancake & b) -> bool
        { 
            return a.Ah > b.Ah; 
        });
        
        for (uint i = 0; i < N; ++i) pAh.at(i).id = i;
        
        vector<Pancake> pR(pAh);
        sort(pR.begin(), pR.end(), 
            [](const Pancake & a, const Pancake & b) -> bool
        { 
            return a.R > b.R; 
        });
        
        double Amax = 0;
        for (uint i = 0; i < N - K + 1; ++i)
        {
            double Anew = pR.at(i).Ar + pR.at(i).Ah;
            pAh.at(pR.at(i).id).Ah = -1;

            uint j = 1;
            for (uint ik = 0; ik < N; ++ik)
            {
                if (j >= K)
                {
                    //cout << "pippo" << endl;
                    break;
                }
                if (pAh.at(ik).Ah != -1)
                {
                    Anew += pAh.at(ik).Ah;
                    ++j;
                }

            }

            if (Anew > Amax)
                Amax = Anew;
            
            
        }
        
        cout << fixed;
        cout << "Case #" << iT << ": " << setprecision(7) << Amax << endl;
        
        // print
        /*
        for (auto i : pAh)
        {
            cout << "R " << i.R << " Ah " << i.Ah << " id " << i.id << endl;
        }
        */
    }
    
    return 0;
}
