#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int pos = 0,cnt = 1;
    char ch;
    for (int i = 1;i <= n;++i)
    {
        cin >> ch;
        if (pos + cnt == i)
        {
            cout << ch;
            cnt++;
            pos = i;
        }
    }
}