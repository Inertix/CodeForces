#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int first;
    int consec;
    int ans(0);

    cin >> n;

    cin >> first;
    int min = first;
    int max = first;

    int i;
    for(i = 1; i < n; ++i)
    {
        cin >> consec;
        if(consec > max)
        {
            max = consec;
            ans++;
        }
        if(consec < min)
        {
            min = consec;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}