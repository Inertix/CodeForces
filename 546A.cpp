#include <iostream>

using namespace std;

int main(){
    int first, money, want, target = 0, i;
    cin >> first >> money >> want;

    for (i = 1; i < want+1; i++){
        target = target + (first * i);
    }
    if (target <= money){
        cout << 0 << endl;
    } else{
        cout << target - money << endl;
    }
    return 0;
}