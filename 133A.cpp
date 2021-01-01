#include <iostream>

using namespace std;

int main()
{
    char commands[4] = {'H', 'Q', '9'};
    bool ans = false;

    string p;

    cin >> p;

    int i;
    for(i = 0; i < p.length(); ++i)
    {
        int j;
        for(j = 0; j < 3; ++j)
        {
            if(p[i] == commands[j])
            {
                ans = true;
            }
        }
    }

    if(ans)
    {
        cout << "YES" << endl;
    } else if(ans != true)
    {
        cout << "NO" << endl;
    }

    return 0;
}