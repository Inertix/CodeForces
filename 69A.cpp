#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int x[100], y[100], z[100];
    int sum1(0), sum2(0), sum3(0);
    bool ans = false;
 
    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i] >> z[i];
        sum1 += x[i];
        sum2 += y[i];
        sum3 += z[i];
    }
 
    if(sum1 != 0 && sum2 != 0 && sum3 != 0)
    {
        ans = false;
    } else if(sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        ans = true;
    }
 
    if(ans)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
 
    return 0;
}