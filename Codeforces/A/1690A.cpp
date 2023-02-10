#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a, b, c; 
        if (n % 3 == 0) 
        {
            a = (n - 3) / 3 + 1;
            b = (n - 3) / 3 + 2;
            c = (n - 3) / 3; 
        }
        else if (n % 3 == 1) 
        {
            a = (n - 4) / 3 + 1;
            b = (n - 4) / 3 + 3;
            c = (n - 4) / 3;
        }
        else if (n % 3 == 2) 
        {
            a = (n - 5) / 3 + 2;
            b = (n - 5) / 3 + 3;
            c = (n - 5) / 3; 
        }
        cout << a << " " << b << " " << c << endl;
    }
}