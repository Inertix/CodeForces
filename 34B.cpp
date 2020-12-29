#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,tv[1000];
    int ans = 0;

    cin >> n >> m;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> tv[i];
    }

    sort(tv, tv+n);

    for(i = 0; i < m; ++i)
    {
        if(tv[i] >= 0)
        {
            break;
        }

        ans += tv[i];
    }

    cout << -ans << endl;
    return 0;
}