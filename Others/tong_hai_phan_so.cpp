#include <bits/stdc++.h>
#include <numeric>

using namespace std;

long long a,b,c,d,uc,bc,s;

int main()
{
    cin >> a >> b >> c >> d;
    bc = (b * d) / __gcd(b, d);
    s = (a * (bc / b)) + (c * (bc / d));
    uc = __gcd(bc, s);
    cout << s / uc << endl << bc / uc;
}