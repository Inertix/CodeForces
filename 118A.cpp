#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    int i;
    for(i = 0; i < input.length(); ++i)
    {
        if(input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'u' || input[i] == 'i')
        {
            continue;
        } else
        {
            cout << "." << input[i];
        }
    }
    return 0;
}