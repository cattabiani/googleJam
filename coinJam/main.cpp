#include <iostream>
#include <math.h>

using namespace std;

long long int findADivisor(long long int N)
{
    long long int div = 0;
    
    long long int lim = sqrt(N);
    
    for (long long int i = 2; i<=lim; ++i)
    {
        if (N%i == 0)
            return i;
    }
    
    return -1;
}

long long int A2N(int N, int* arr, int base)
{
    long long int sum = 0;
    int pow = 1;
    for (int i = N-1; i >= 0; --i)
    {
        sum += arr[i]*pow;
        pow *= base;
    }
    
    if (sum < 0)
        cout << "pioo" << endl;
    //cout << sum << endl;
    return sum;
}

void N2A(int number, int N, int* arr, int base)
{
    for (int i = N-1; i >= 0; --i)
    {
        arr[i] = number%base;
        number /= base;
    }
}

int main() 
{

    int T;
    cin >> T;

        int N, J;
        cin >> N;
        cin >> J;
        
    cout << "Case #1: " << endl;
    
    int test[N];
    test[0] = 1;
    test[N-1] = 1;
    
    int counter = 0;
    for (int iT = 0; iT < pow(2, N-2); ++iT)
    {
        if (counter == J)
            break;
        
        N2A(iT, N-2, &test[1], 2);
        
        //TEST
        long long int  div[9];
        bool isPrime = false;
        
        for (int iDiv = 0; iDiv < 9; ++iDiv)
        {
            int base = iDiv + 2;
            long long int bin = A2N(N, test, base);
            
            //cout << bin << endl;
            
            div[iDiv] = findADivisor(bin);
            
            if (div[iDiv] == -1)
            {
                isPrime = true;
                break;
            }
        }
        
        // PRINT
        if (isPrime == false)
        {
            for (int i = 0; i < N; ++i)
            {
                cout << test[i];
            }

            for (int i = 0; i < 9; ++i)
            {
                cout << ' ' << div[i];
            }
            cout << endl;
            
            
            ++counter;
        }
        
        
    }
cout << counter << endl;
    
    return 0;
}
