#include <iostream>

using namespace std;

int main()
{
    long long int n,ans;

    cin >> n;

    if(n % 2 == 0)
    {
        ans = n / 2;
    } else
    {
        ans = (n / 2) - n;
    }

    cout << ans << endl;
    return 0;
}