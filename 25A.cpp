#include <iostream>

using namespace std;

int main()
{
    int n;
    int num[100];
    int odd(0), even(0), size(0);
    bool isOdd = false, isEven = false;
    int targetOdd(0), targetEven(0);

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> num[i];
        size++;
        
        if(num[i] % 2 == 0)
        {
            even++;
            targetEven = targetEven + i;
        } else
        {
            odd++;
            targetOdd = targetOdd + i;
        }
    }

    if(even > size / 2)
    {
        isEven = true;
    } else
    {
        isOdd = true;
    }

    if(isOdd)
    {
        cout << targetEven + 1 << endl;
    } else
    {
        cout << targetOdd + 1 << endl;
    }
    
    return 0;
}