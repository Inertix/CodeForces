#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b;
    int num(0);

    cin >> n >> m >> a >> b;

    if(m * a > b)
    {
        num = (n % m) * a;

        if(num > b)
        {
            cout << n / m * b + b << endl;
        } else
        {
            cout << n / m * b + num << endl;
        }
        
    } else
    {
        cout << n * a << endl;
    }

    return 0;
}