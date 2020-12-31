#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int speed[100],ram[100],hdd[100],cost[100];

    cin >> n;

    int i;
    for(i = 1; i <= n; ++i)
    {
        cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];
    }

    for(i = 1; i <= n; ++i)
    {
        int j;
        for(j = 1; j <= n; ++j)
        {
            if(speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j])
            {
                cost[i] = 1001;
            }
        }
    }

    cout << min_element(cost + 1, cost + 1 + n) - cost << endl;
    return 0;
}