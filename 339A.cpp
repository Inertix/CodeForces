#include <iostream>

using namespace std;

int main(){
    string x;
    int num,i,j;

    cin >> x;

    num = x.length();

    for (i = 0; i < num; ++i)
    {
        for (j = 0; j < num-i-2; j+=2)
        {
            if(x[j] > x[j + 2]){
                swap(x[j],x[j+2]);
            }
        }
    }

    cout << x << endl;
    return 0;
}