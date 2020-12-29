#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin >> n1;
    if (n1 % 2 == 0 && n1 > 2){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}