#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Table
{
public :
    Table(const int n, const int m, const bool val = 0) : storage_(n * m, val), n_(n), m_(m) {}
    Table(const int n, const bool val = 0) : storage_(n * n , val), n_(n), m_(n) {}
    
    inline int& at(const int i, const int j)
    {
        return storage_.at(i * m_ + j);
    }
    
    inline void print() 
    {
        for (int i = 0; i < n_; ++i)
        {
            for (int j = 0; j < m_; ++j)
            {
                cout << at(i, j);
            }
            cout << endl;
        }
    }
    
private :
    const int n_;
    const int m_;
    vector<int> storage_;
};

int main() 
{
    int nT;
    cin >> nT;
    
    for (int iT = 1; iT <= nT; ++iT)
    {
        cout << "Case #" << iT << ": ";
        
        int J, P, S, K;
        cin >> J >> P >> S >> K;
        list<vector<int> > sol;
        
        //cout << J << ' ' << P << ' ' << S << "puppa" << endl;
        
        Table JPtab(J, P);
        Table JStab(J, S);
        Table PStab(P, S);
        
        //cout << J << ' ' << P << ' ' << S << "puppa" << endl;
        
        for (int j = 0; j < J; ++j)
        {
            for (int p = 0; p < P; ++p)
            {
                for (int s = 0; s < S; ++s)
                {
                    //cout << J << ' ' << P << ' ' << S << "puppa" << endl;
                    if (JPtab.at(j,p) == K ||
                        JStab.at(j,s) == K ||
                        PStab.at(p,s) == K)
                    {
                        
                        //cout << j+1 << ' ' << p+1 << ' ' << s+1 << " skip!" << endl;
                    }
                    else
                    {
                        ++JPtab.at(j,p);
                        ++JStab.at(j,s);
                        ++PStab.at(p,s);
                        vector<int> newOutfit = {j + 1, p + 1, s + 1};
                        sol.push_back(newOutfit);
                    }
                }
            }
        }
        
        // print
        cout << sol.size() << endl;
        for (auto i : sol) 
        {
            cout << i.at(0) << ' ' << i.at(1) << ' ' << i.at(2) << endl;
        }
        
    }
    
    return 0;
}
