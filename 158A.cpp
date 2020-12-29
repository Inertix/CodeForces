#include <iostream>
 
using namespace std;
 
int main()
{
    int times, pos, i, count = 0, input[100];
    cin >> times >> pos;
 
    for (i = 1; i <= times; i++)
    {
        cin >> input[i];
    }

    for (i = 1; i <= times; i++)
    {
        if (input[i] > 0 && input[i] >= input[pos])
        {
            count++;
        }

    }
    cout << count << endl;
    return 0;
}