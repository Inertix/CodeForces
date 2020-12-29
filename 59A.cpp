#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int length, i, count = 0;
    cin >> s;
    length = s.length();

    for(i = 0; i < length; ++i)
    {
        if(isupper(s[i])){
            count++;
        }
    }

    if(count > length/2)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }


    cout << s << endl;
    return 0;
}