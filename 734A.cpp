#include <iostream>

using namespace std;

int main()
{
    int n,i,countA = 0, countD = 0;
    string s;

    cin >> n;
    cin >> s;

    for(i = 0; i < n; ++i)
    {
        if(s[i] == 'A'){
            countA++;
        } else if(s[i] == 'D'){
            countD++;
        }
    }

    if(countA > countD){
        cout << "Anton" << endl;
    } else if(countD > countA){
        cout << "Danik" << endl;
    } else if(countD = countA){
        cout << "Friendship" << endl;
    }

    return 0;
}