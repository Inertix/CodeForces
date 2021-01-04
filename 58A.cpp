#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string key = "hello";
    int ans(0);
    int i;
    int j(0);
    for(i = 0; i < s.length(); ++i)
    {
        if(s[i] == key[j])
        {
            j++;
            ans++;

            if(ans >= 5)
            {
                break;
            }
        }
    }

    if(ans == 5)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
    return 0;
}