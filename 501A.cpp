#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,d;
    int m1 = 0, m2 = 0, misha = 0;
    int v1 = 0, v2 = 0, vasya = 0;

    cin >> a >> b >> c >> d;

    m1 = (a * 3) / 10;
    m2 = a - a/250 * c;
    misha = max(m1,m2);

    v1 = (b * 3) / 10;
    v2 = b - b/250 * d;
    vasya = max(v1,v2);

    if(misha > vasya)
    {
        cout << "Misha" << endl;
    } else if(vasya > misha)
    {
        cout << "Vasya" << endl;
    } else if(vasya == misha)
    {
        cout << "Tie" << endl;
    }

    return 0;
}