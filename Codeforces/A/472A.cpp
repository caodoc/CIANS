#include <bits/stdc++.h>

using namespace std;

int n;

int calc(int x)
{
    int tmp = 0;
    for (int i = 1;i <= sqrt(x);i++) if (x % i == 0) if (x % i == i) tmp++; else tmp += 2;
    return tmp;
}

int main()
{
    cin >> n;
    int i = 0;
    for (i = 4;i <= n;i++)
    {
        if (calc(i) > 2 && calc(n - i) > 2) break;
    }
    cout << i << " "<< n - i;
}