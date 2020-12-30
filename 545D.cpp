#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int t[100001];
    int ans(0), sum(0);

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> t[i];
    }
    
    sort(t, t + n);

    for(i = 0; i < n; ++i)
    {
        if(sum <= t[i])
        {
            sum += t[i];
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}