#include <iostream>

using namespace std;

int main()
{
    int n;
    int m,c;
    int m2(0), c2(0);

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> m >> c;

        if(m > c)
        {
            m2++;
        } else if(c > m)
        {
            c2++;
        }
    }

    if(m2 > c2)
    {
        cout << "Mishka" << endl;
    } else if(c2 > m2)
    {
        cout << "Chris" << endl;
    } else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}