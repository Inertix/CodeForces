#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100000];
    int count(0), ans(0);

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for(i = 0; i < n; ++i)
    {
        if(a[i] >= a[i - 1])
        {
            count++;
            ans = max(ans,count);
        } else
        {
            count = 1;
        }
    }

    cout << ans << endl;
    return 0;
}