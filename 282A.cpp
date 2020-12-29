#include <iostream>

using namespace std;

int main()
{
    int times;
    string command;
    int x = 0;

    cin >> times;

    while (times--){
        cin >> command;

        if (command == "++X" || command == "X++"){
            x++;
        } else if (command == "X--" || command =="--X"){
            x--;
        }
    }
    cout << x << endl;
    return 0;

}