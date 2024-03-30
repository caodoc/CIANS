#include <bits/stdc++.h>

using namespace std;

int t,a,b;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if(a > b) swap(a, b);
        cout << max(a * 2, b) * max(a * 2, b)<<endl;
    }
}