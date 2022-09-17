#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

int n;

int check(int x)
{
    int d = 1,c = N,g,dem;
    while (g != x)
    {
        g = (d + c) / 2;
        if (g > x) c = g - 1; else d = g + 1;
        dem++;
    }
    return dem;
}

int main()
{
    cin >> n;
    cout << check(n);
}