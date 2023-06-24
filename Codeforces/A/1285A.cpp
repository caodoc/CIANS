#include <bits/stdc++.h>

using namespace std;

int n,a,b;
char ch;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> ch;
        if (ch == 'L') a++;
        else b++;
    }
    cout << a + b + 1;
}