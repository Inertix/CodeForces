#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s[4];
    int i, count = 0;
    for (i = 0; i < 4; ++i)
    {
        cin >> s[i];
    }

    sort(s,s+4);

    for (i = 1; i < 4; ++i)
    {
        if(s[i] == s[i-1]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}