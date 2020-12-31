#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1, string2;

    cin >> string1 >> string2;

    int i;
    for(i = 0; i < string1.length(); ++i)
    {
        string1[i] = towupper(string1[i]);
        string2[i] = towupper(string2[i]);
    }

    if(string1 > string2)
    {
        cout << "1" << endl;
    } else if(string2 > string1)
    {
        cout << "-1" << endl;
    } else
    {
        cout << "0" << endl;
    }
    
    return 0;
}