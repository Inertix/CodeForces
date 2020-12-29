#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i;
    int p;
    double ans = 0.0;
    for(i = 0; i < n; ++i)
    {
        cin >> p;
        ans += p;
    }

    ans = ans / n;
    cout << ans;

    return 0;
}