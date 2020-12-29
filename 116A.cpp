#include <iostream>

using namespace std;

int main()
{
    int n,exit,enter,current = 0, max = 0, i;
    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> exit >> enter;
        current = (exit + max) - enter;
        if (current < 0){
            max = 0;
        } else {
            max = current;
        }
    }

    cout << current << endl;
    return 0;
}