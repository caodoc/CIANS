#include <bits/stdc++.h>

using namespace std;

long long n,m,a;

int ucln(int a, int b)
{
    if (b == 0) return a;
    return ucln(b, a % b);
}

int main()
{
    cin >> n >> m;
    a = ucln(n, m);
    cout << a << endl;
    cout << n / a << " " << m / a;
}