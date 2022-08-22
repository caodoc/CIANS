#include <bits/stdc++.h>

using namespace std;

double n,m,a,b;
int d;

bool check(double x,double y)
{
    if ((x <= a && y <= b) || (x <= b && y <= a)) return true;
    return false; 
}

int main()
{
    cin >> n >> m >> a >> b;
    while (check(n, m) == false)
    {
        if (n > a || n > b)
        {
            n /= 2;
            d++; 
        }
        if (check(n, m) == true) break;
        if (m > a || m > b)
        {
            m /= 2;
            d++; 
        }
        if (check(n, m) == true) break;
    }
    if (n != m) cout << d - 1; else cout << d;
}