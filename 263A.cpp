#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int matrix[5][5];
    int ans(0);

    int i;
    for(i = 0; i < 5; ++i)
    {
        int j;
        for(j = 0; j < 5; ++j)
        {
            cin >> matrix[i][j];

            if(matrix[i][j] == 1)
            {
                ans = abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}