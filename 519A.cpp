#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char input[8][8];
    int white = 0, black = 0;

    int i;
    for(i = 0; i < 8; ++i)
    {
        cin >> input[i];

    int j;
    for(j = 0; j < 8; ++j)
    {
        if(input[i][j] == '.'){
            continue;
        } else if(input[i][j] == 'q'){
            black += 9;
        } else if(input[i][j] == 'r'){
            black += 5;
        } else if(input[i][j] == 'b'){
            black += 3;
        } else if(input[i][j] == 'n'){
            black += 3;
        } else if(input[i][j] == 'p'){
            black += 1;
        }
        else if(input[i][j] == 'Q'){
            white += 9;
        } else if(input[i][j] == 'R'){
            white += 5;
        } else if(input[i][j] == 'B'){
            white += 3;
        } else if(input[i][j] == 'N'){
            white += 3;
        } else if(input[i][j] == 'P'){
            white += 1;
        }
    }
    }

    if(black > white)
    {
        cout << "Black" << endl;
    } else if(white > black)
    {
        cout << "White" << endl;
    } else if(white == black)
    {
        cout << "Draw" << endl;
    }

    return 0;
}