#include <iostream>
#include <string>

using namespace std;

class Board
{
public :
    
    Board(const string in) : b(in) {}
    
    inline char at(const int x,const int y) { return b.at(x*4 + y); }
    
private :
    
    const string b;
};

void printMsg(const int msgCode, int iT)
{
    
        cout << "Case #" << iT << ": ";
        
        switch (msgCode)
        {
            case 0 :
            {
                cout << "Draw";
                break;
            }
            case 1 :
            {
                cout << "Game has not completed";
                break;
            }
            case 2 :
            {
                cout << "O won";
                break;
            }
            case 3 :
            {
                cout << "X won";
                break;
            }
        }
        
        cout << endl;
}

int main() 
{
    int T;
    cin >> T;
    
    for (int iT = 1; iT <= T; ++iT)
    {
        string rawIn(16,'.');
        for (int i = 0; i < 16; ++i)
        {
            cin >> rawIn[i];
        }
        
        auto board = Board(rawIn);
        
        int msgCode = 0;
        
        for (int i = 0; i < 4; ++i)
        {
            int O = 0;
            int X = 0;
            for (int j = 0; j < 4; ++j)
            {
                char c = board.at(i, j);
                switch (c)
                {
                    case '.' :
                    {
                        msgCode = 1;
                        break;
                    }
                    case 'O' :
                    {
                        ++O;
                        break;
                    }
                    case 'X' :
                    {
                        ++X;
                        break;
                    }
                    case 'T' :
                    {
                        ++O;
                        ++X;
                        break;
                    }
                    default :
                    {
                        cout << "input malformed" << endl;
                        break;
                    }
                }
            }
            
            if (O == 4)
            {
                msgCode = 2;
                break;
            }
            if (X == 4)
            {
                msgCode = 3;
                break;
            }
        }
        
        if (msgCode>1)
        {
            printMsg(msgCode, iT);
            continue;
        }
        
        
        for (int i = 0; i < 4; ++i)
        {
            int O = 0;
            int X = 0;
            for (int j = 0; j < 4; ++j)
            {
                char c = board.at(j, i);
                switch (c)
                {
                    case '.' :
                    {
                        msgCode = 1;
                        break;
                    }
                    case 'O' :
                    {
                        ++O;
                        break;
                    }
                    case 'X' :
                    {
                        ++X;
                        break;
                    }
                    case 'T' :
                    {
                        ++O;
                        ++X;
                        break;
                    }
                    default :
                    {
                        cout << "input malformed" << endl;
                        break;
                    }
                }
            }
            
            if (O == 4)
            {
                msgCode = 2;
                break;
            }
            if (X == 4)
            {
                msgCode = 3;
                break;
            }
        }
        
        if (msgCode>1)
        {
            printMsg(msgCode, iT);
            continue;
        }

        int O = 0;
        int X = 0;
        for (int j = 0; j < 4; ++j)
        {
            char c = board.at(j, j);
            switch (c)
            {
                case '.' :
                {
                    msgCode = 1;
                    break;
                }
                case 'O' :
                {
                    ++O;
                    break;
                }
                case 'X' :
                {
                    ++X;
                    break;
                }
                case 'T' :
                {
                    ++O;
                    ++X;
                    break;
                }
                default :
                {
                    cout << "input malformed" << endl;
                    break;
                }
            }
        }
        
        if (O == 4)
        {
            msgCode = 2;
        }
        if (X == 4)
        {
            msgCode = 3;
        }
        
        if (msgCode>1)
        {
            printMsg(msgCode, iT);
            continue;
        }
        
        O = 0;
        X = 0;
        for (int j = 0; j < 4; ++j)
        {
            char c = board.at(j, 3-j);
            switch (c)
            {
                case '.' :
                {
                    msgCode = 1;
                    break;
                }
                case 'O' :
                {
                    ++O;
                    break;
                }
                case 'X' :
                {
                    ++X;
                    break;
                }
                case 'T' :
                {
                    ++O;
                    ++X;
                    break;
                }
                default :
                {
                    cout << "input malformed" << endl;
                    break;
                }
            }
        }
        
        if (O == 4)
        {
            msgCode = 2;
        }
        if (X == 4)
        {
            msgCode = 3;
        }


        printMsg(msgCode, iT);

        
        // check
        /*
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                cout << board.at(i, j);
            }
            cout << endl;
        }
        cout << endl;
        */
    }
    
    
    return 0;
}
