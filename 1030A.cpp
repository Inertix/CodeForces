#include <iostream>

using namespace std;

int main()
{
    int n,num[1000];
    int count = 0;

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> num[i];

        if(num[i] == 1){
            count++;
        }
    }

    if(count >= 1)
    {
        cout << "HARD" << endl;
    } else{
        cout << "EASY" << endl;
    }

    return 0; 
}