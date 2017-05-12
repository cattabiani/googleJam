#include <iostream>
#include<vector>
#include <cmath>

using namespace std;

class Table
{
public :
    Table(const int n, const int m, const bool val = false) : storage_(n * m, val), n_(n), m_(m) {}
    Table(const int n, const bool val = false) : storage_(n * n , val), n_(n), m_(n) {}
    
    inline bool at(const int i, const int j)
    {
        return storage_.at(i * m_ + j);
    }
        
    inline void set(const int i, const int j, const bool val)
    {
        storage_.at(i * m_ + j) = val;
    }
    
    inline void safeSet(const int i, const int j, const bool val)
    {
        if (j > i)
            set(i, j, val);
    }
    
    inline void setTU(const bool val)
    {
        for (int i = 0; i < n_; ++i)
        {
            for (int j = i+1; j < m_; ++j)
            {
                set(i, j, val);
            }
        }
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
    vector<bool> storage_;
};

void D2B(vector<bool>& vec, unsigned long long int N)
{
    int i = vec.size()-1;
    while (N != 0)
    {
        vec.at(i--) = N%2;
        N /= 2;
    }
}


int main() 
{

    int nT;
    cin >> nT;
    
    for (int iT = 1; iT <= nT; ++iT)
    {
        int B;
        unsigned long long int M;
        cin >> B >> M;
        
        cout << "Case #" << iT << ": ";
        
        if (M > pow(2,B-2))
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "POSSIBLE" << endl;
            
            Table tab(B);
            tab.setTU(true);
            
            vector<bool> fl(B-2, false);
            
            D2B(fl, M-1);
            for (int i = 0; i < B-2; ++i) 
            {
                tab.set(0, i+1, fl.at(i));
            }
            
            tab.print();
        }
        
    }


    
    
    return 0;
}
