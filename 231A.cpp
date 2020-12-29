#include <iostream>

using namespace std;

int main()
{
    int num1;
    int a, b, c;
    int count = 0;
    cin >> num1;

    while (num1--){
        cin >> a >> b >> c;
        if ( a + b + c >= 2 ){
            count += 1;
        }
        
    }
    cout << count << endl;
    return 0;
}