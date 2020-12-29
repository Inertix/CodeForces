#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int k,n;
    string s,t;

    cin >> k;

    int i;
    for(i = 0; i < k; ++i)
    {
        cin >> n;
        cin >> s >> t;

        int position = -1;
        int j;
        for(j = 0; j < n; ++j)
        {
            if(s[j] != t[j]){
                if(position < 0)
                {
                    position = j;
                } else
                {
                    swap(s[j],t[position]);
                    break;
                }
            }
        }
    if(s == t){
        cout << "Yes" << endl;
    } else if(s != t)
    {
        cout << "No" << endl;
    }
    }

    return 0;
}