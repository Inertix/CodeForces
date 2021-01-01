#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a[100], sum(0);
    int mine(0), ans(0);
    
    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);

    for(i = n - 1; i >= 0 && mine <= sum/2; --i)
    {
        mine += a[i];
        ans++;
    }

    cout << ans << endl;
    return 0;
}