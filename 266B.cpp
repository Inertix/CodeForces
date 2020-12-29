#include <iostream>

using namespace std;

int main()
{
    int n,t,i;
    string a;

    cin >> n >> t;
    cin >> a;

    while(t--)
    {
        for(i = 1; i < n; ++i)
        {
            if(a[i-1] == 'B' && a[i] == 'G'){
                swap(a[i],a[i-1]);
                ++i;
            }
        }
    }

    cout << a << endl;
    return 0;
}