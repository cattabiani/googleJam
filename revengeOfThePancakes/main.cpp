#include <iostream>
#include <string>

using namespace std;

class PancakeFlipper
{

public :

PancakeFlipper() { nFlips = 0; }
    
void flip(int range, string & stack)
{
    // debug
    if (range >= stack.length() || range < 0)
    {
        cout << "This flipping makes no sense. We did nothing. range = " << range << endl;
        return;
    }
    
    //cout << stack << endl;
    
    //cout << stack.length() << endl;
    
    if (range%2 == 0)
        stack[range/2] = sgnFlipper(stack[range/2]);
    
    for (int i = 0; i < range/2 + range%2; ++i)
    {
        char temp = stack[i];
        stack[i] = sgnFlipper(stack[range - i]);
        stack[range - i] = sgnFlipper(temp);
        
        //cout << stack << endl;
    }
    
    ++nFlips;
    
    //cout << range << endl;
    //cout << stack << endl << endl;
}

inline int flipCount() {return nFlips; }

private :

char sgnFlipper(char a)
{
    switch (a)
    {
        case '+' :
            return '-';
        case '-' :
            return '+';
        default :
            return '0';
    }
}

int nFlips = 0;

};

int main() 
{
    int nCases;
    cin >> nCases;
     
    for (int iCases = 1; iCases <= nCases; ++iCases)
    {
        string stack;
        cin >> stack;
        
        auto flipMaster = PancakeFlipper();
        
       
        int iEnd = stack.length()-1;
        
        while (iEnd >= 0)
        {
            if (stack[iEnd] == '+')
            {
                --iEnd;
            }
            else
            {
                if (stack[0] == '-')
                {
                    flipMaster.flip(iEnd, stack);
                    --iEnd;
                }
                else
                {
                    int iBegin = 0;
                    while (stack[iBegin] == '+')
                    {
                        ++iBegin;
                    }
                    --iBegin;
                    flipMaster.flip(iBegin, stack);
                    flipMaster.flip(iEnd, stack);
                    
                    iEnd -= iBegin;
                }
            }
            
        }
        
        
        
        

        /*
        flipMaster.flip(stack.length()-1, stack);
        
        cout << stack << endl;
        */
        cout << "Case #"<< iCases << ": " << flipMaster.flipCount() << endl;
        
    }
    
    return 0;
}
