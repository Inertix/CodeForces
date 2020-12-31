#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    int ans(0);

    getline(cin, str);

    sort(str.begin(), str.end());

    int length = str.length();
    
    int i;
    for(i = 0; i < length; ++i)
    {
        if(str[i] == '{' || str[i] == '}' || str[i] == ',' || str[i] == ' ')
        {
            continue;
        } else
        {
            if(str[i] != str[i + 1])
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}