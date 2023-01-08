#include <bits/stdc++.h>

using namespace std;

int n,m;

int calc(int x)
{
    int tmp = 0;
    for (int i = 1;i <= sqrt(x);i++) if (x % i == 0) if (x / i == i) tmp++; else tmp += 2;
    return tmp;
}

int main()
{
    cin >> n >> m;
    if (calc(m) != 2) cout << "NO";
    else
    {
        int c = 1;
        for (int i = n + 1;i < m;i++) if (calc(i) == 2)
        {
            c = 0;
            break;
        }
        if (c == 1) cout << "YES"; else cout << "NO";
    }
}