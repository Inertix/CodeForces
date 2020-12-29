#include <iostream>

using namespace std;

int main()
{
    int t,a,b,ans = 0;

    cin >> t;

    int i;
    for(i = 0; i < t; ++i)
    {
        cin >> a >> b;

        if(a % b != 0){
            ans = b - (a % b);
        } else{
            ans = 0;
        }

        cout << ans << endl;
    }

    return 0;
}