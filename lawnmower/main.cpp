#include <iostream>
#include <vector>

using namespace std;


class Lawn
{
public :
    
    Lawn(const int N, const int M, const vector<int>& in) : N_(N), M_(M), store_(in), rmax_(N,0), cmax_(M,0)
    {
        for (int i = 0; i < N_; ++i)
        {
            for (int j = 0; j < M_; ++j)
            {
                int h0 = h(i, j);
                if (h0 > rmax_.at(i)) rmax_.at(i) = h0;
                if (h0 > cmax_.at(j)) cmax_.at(j) = h0;
            }
        }
    }

inline int h(const int i, const int j)
{
    return store_.at(i*M_ + j);
}

inline int hrmax(const int i)
{
    return rmax_.at(i);
}

inline int hcmax(const int j)
{
    return cmax_.at(j);
}

private :
    const int N_;
    const int M_;
    const vector<int> store_;
    vector<int> rmax_;
    vector<int> cmax_;

};

int main() 
{
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        int N, M;
        cin >> N >> M;
        
        vector<int> in(N*M);
        for (int i = 0; i < N*M; ++i) 
        {
            cin >> in[i];
        }
        
        Lawn lawn = Lawn(N, M, in);
        
        // check
        bool lm = true;
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                int h0 = lawn.h(i, j);
                if (h0 != lawn.hrmax(i) && h0 != lawn.hcmax(j))
                {
                    lm = false;
                    break;
                }
            }
            if (!lm)
                break;
        }
        
        cout << "Case #" << iT << ": " << (lm ? "YES" : "NO") << endl;
        
        /*
        cout << "  | ";
        for (int j = 0; j < M; ++j) cout << lawn.hcmax(j) << ' ';
        cout << endl;
        cout << "----";
        for (int j = 0; j < M; ++j) cout << "--";
        cout << endl;
        
        for (int i = 0; i < N; ++i)
        {
            cout << lawn.hrmax(i) << " | ";
            for (int j = 0; j < M; ++j)
            {
                cout << lawn.h(i,j) << ' ';
            }
            cout << endl;
        }
        cout << endl;
        */
    }
    
    
    return 0;
}
