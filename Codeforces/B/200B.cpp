#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    double x,s;
    for (int i = 1;i <= n;i++) 
    {
        cin >> x;
        s += x;
    }
    cout << setprecision(12) << fixed << s / n;
}