#include <bits/stdc++.h>

using namespace std;

int n,res;

int main()
{
    cin >> n;
    string s;
    for (int i = 1;i <= n;i++)
    {
        cin >> s;
        if (s == "Tetrahedron") res += 4;
        if (s == "Cube") res += 6;
        if (s == "Octahedron") res += 8;
        if (s == "Dodecahedron") res += 12;
        if (s == "Icosahedron") res += 20;
    }
    cout << res;
}