#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    int length;
    length = a.length();

    int i;
    for(i = 0; i < length; ++i)
    {
        if(a[i] == b[i]){
            a[i] = '0';
        } else if(a[i] != b[i]){
            a[i] = '1';
        }
    }

    cout << a << endl;
    return 0;
}