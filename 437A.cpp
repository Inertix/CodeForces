#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int i;
    string input[4];
    int length[4];
    int count = 0;
 
    for(i = 0; i < 4; ++i)
    {
        cin >> input[i];
 
        length[i] = input[i].length() - 2;
    }
 
    sort(length, length + 4);
 
    if(length[0] <= length[1] / 2){
        count += 1;
    }
    
    if(length[3] >= length[2] * 2){
        count += 2;
    }
 
    if(count == 3 || count == 0)
    {
        cout << "C" << endl;
    } else if(count == 1)
    {
        for(i = 0; i < 4; ++i)
        {
            if(length[0] + 2 == input[i].length())
            {
                cout << input[i].at(0);
            }
        }
    } else if(count == 2)
    {
        for(i = 0; i < 4; ++i)
        {
            if(length[3] + 2 == input[i].length())
            {
                cout << input[i].at(0);
            }
        }
    }
 
    return 0;
}