#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    bool first = false;
    int count = 0;

    cin >> s;

    string s2 = s;

    reverse(s2.begin(), s2.end());

    string mirror = "AHIMOTUVWXY";

    if(s != s2){
        first = false;
    } else{
        first = true;
    }

    if(first){
        int i;
        for(i = 0; i < s.length(); ++i)
        {
            int j;
            for(j = 0; j < mirror.length(); ++j)
            {
                if(s[i] != mirror[j]){
                    count += 0;
                } else if(s[i] == mirror[j]){
                    count += 1;
                }
            }
        }
    }

    if(count == s.length()){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;
}