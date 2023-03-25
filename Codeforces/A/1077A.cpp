#include<bits/stdc++.h>

using namespace std;

int t;
long long int a,b,q,d,res;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> q;
        res = d = 0;
        if (q % 2 == 1) d = (q / 2) + 1;
        else d = q / 2;
        res = (d * a) - ((q - d) * b);
        cout << res << endl;
    }
}