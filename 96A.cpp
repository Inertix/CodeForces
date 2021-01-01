#include <iostream>

using namespace std;

int main()
{
    string str;
    int count(1);
    bool ans = false;

    cin >> str;

    int i;
    for(i = 0; i < str.length(); ++i)
    {
        if(str[i] == str[i + 1])
        {
            count++;
        } else
        {
            count = 1;
        }

        if(count == 7)
        {
            ans = true;
            break;
        }
    }

    if(ans)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}