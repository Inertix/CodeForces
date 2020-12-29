#include <iostream>

using namespace std;

int main()
{
    int num;
    string word;
    cin >> num;
    while (num--){
        cin >> word;
        if (word.length() > 10){
            cout << word[0];
            cout << word.length() - 2;
            cout << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}