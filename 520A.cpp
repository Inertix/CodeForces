#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string str;
    int count(0);

    cin >> n;
    cin >> str;

    int i;
    for(i = 0; i < n; ++i)
    {
        str[i] = towlower(str[i]);
    }
    
    sort(str.begin(), str.end());

    for(i = 0; i < n; ++i)
    {
        if(str[i] != str[i+1])
        {
            count++;
        }
    }

    if(count == 26)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }

    return 0;
}