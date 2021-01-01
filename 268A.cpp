#include <iostream>

using namespace std;

int main()
{
    int n;
    int count(0);
    int h[100], a[100];
    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> h[i] >> a[i];
    }
    
    for(i = 0; i < n; ++i)
    {
        int j;
        for(j = 0; j < n; ++j)
        {
            if(i == j)
            {
                continue;
            } if(h[i] == a[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}