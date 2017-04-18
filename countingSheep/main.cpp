#include <iostream>

#include <memory>
#include <unordered_set>

using namespace std;



int main() 
{
    int tot, n;
    cin >> tot;
    
    for (int i = 0; i < tot; ++i)
    {
        cout << "Case #" << i+1 << ": ";
        
        cin >> n;
        
        // particular case
        if (n == 0)
        {
            cout << "INSOMNIA" << endl;
        }
        else
        {
            unordered_set<int> missingDigits;
            for (int j = 0; j<10; ++j)
            {
                missingDigits.insert(j);
            }
            
            int finalNumber = 0;
            while (!missingDigits.empty())
            {
                finalNumber += n;
                int digitExtractor = finalNumber;
                
                while (digitExtractor != 0)
                {
                    int test = digitExtractor%10;
                    
                    auto got = missingDigits.find (test);
                    
                    if ( got != missingDigits.end() )
                        missingDigits.erase(got);
                    
                    digitExtractor /= 10;
                }
                
                
            }
            
            cout << finalNumber << endl;
        }
    }
    
    return 0;
}