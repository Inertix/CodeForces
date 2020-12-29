#include <iostream>

using namespace std;

int main()
{
    string n;
    int length,i,count = 0;
    cin >> n;

    length = n.length();

    for(i = 0; i < length; ++i)
    {
        if(n[i] == '4' || n[i] == '7')
        {
            count++;
        }

    }

    if(count == 4 || count == 7)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}