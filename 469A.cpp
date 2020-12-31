#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int p,a,q,arr[200], count(0);

    cin >> n;

    cin >> p;

    int i;
    for(i = 0; i < p; ++i)
    {
        cin >> arr[i];
    }

    cin >> q;

    int j;
    for(j = p; j < p + q; ++j)
    {
        cin >> arr[j];
    }

    sort(arr, arr + p + q);

    int k;
    for(k = 0; k < p + q; ++k)
    {
        if(arr[k] != arr[k + 1])
        {
            count++;
        }
    }

    if(count == n)
    {
        cout << "I become the guy." << endl;
    } else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}