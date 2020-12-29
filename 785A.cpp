#include <iostream>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    string input;
    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> input;

        if(input == "Tetrahedron"){
            ans += 4;
        } else if(input == "Cube"){
            ans += 6;
        } else if(input == "Octahedron"){
            ans += 8;
        } else if(input == "Dodecahedron"){
            ans += 12;
        } else if(input == "Icosahedron"){
            ans += 20;
        }
    }

    cout << ans << endl;
    return 0;
}