#include <bits/stdc++.h>

using namespace std;

int l,r,i,j,dem;

int calc(int x)
{
    return (x % 10) + (x / 10 % 10) + (x / 100 % 10) + (x / 1000 % 10) + (x / 10000 % 10) + (x / 100000 % 10) + (x / 1000000 % 10) + (x / 10000000 % 10) + (x / 100000000 % 10) + (x / 1000000000 % 10);
}

bool check(int y)
{
    int tmp = 0;
    for (int i = 1;i <= y;i++) if (y % i == 0) 
    {
        tmp++;
        if (tmp > 2) return false;
    }
    if (tmp == 2) return true;
    return false;
}

int main()
{
    cin >> l >> r;
    for (i = l;i <= r;i++) if (check(calc(i)) == true) dem++;
    cout << dem;
}