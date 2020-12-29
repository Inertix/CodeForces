#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    int n, count = 0;
    cin >> name;

    n = name.length();

    sort(name.begin(), name.end());

    for (int i = 1; i < n; i++){
        if (name[i] != name[i-1]){
            count ++;
        }
    }
    if ((count+1)%2 ==0){
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}