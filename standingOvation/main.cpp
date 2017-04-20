#include <iostream>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    for (int it0 = 1; it0 <= T; ++it0)
    {
        int Smax;
        cin >> Smax;
        
        char str[Smax+2];
        cin >> str;
        
        int add = 0;
        int stdCrown = 0;
        
        for (int ic = 0; ic < Smax + 1; )
        {
            if (stdCrown >= ic)
            {
                stdCrown += str[ic] - '0';
                ++ic;
            }
            else
            {
                ++add;
                ++stdCrown;
            }
        }
        
        // PRINT
        
        // il programma al 55 esimo caso mette T a zero. Con la linea seguente non accade...
        //cout << " " << endl;
        cout << "Case #" << it0 << ": " << add << endl;
        
        // ...ho controllato con questa linea
        //cout << T << endl;
    }
    
    return 0;
}
