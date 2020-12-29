#include <iostream>

using namespace std;

int main()
{
    int t,s,ans = 0,x;

    cin >> t;

    int i;
    for(i = 0; i < t; ++i)
    {
        cin >> s;

        while(s){
            if(s < 10){
                ans += s;
                s = 0;
            } else{
                x = s/10;
                ans += x * 10; 
                s %= 10;
                s += x;
            }
        }
        
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}