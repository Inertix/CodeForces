#include <iostream>
#include <clocale>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;  
    bool accident = false;
    int count(0);

    int i;
    for(i = 0; i < s.length(); ++i)
    {
        if(isupper(s[i]))
        {
            count++;
        }
    }

    if(islower(s[0]) && count >= s.length() - 1)
    {
        accident = true;
    } else if (count >= s.length())
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    if(accident)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
    return 0;
}