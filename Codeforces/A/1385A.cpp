#include<bits/stdc++.h>

using namespace std;

int t,x,y,z;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        if (x > y) swap(x, y);
        if (x > z) swap(x, z);
        if (y > z) swap(y, z);
        if (y == z)
        {
            cout << "YES" << endl;
            cout << x << " " << x << " " << z;
        }
        else cout << "NO";
        cout << endl;
    }
}