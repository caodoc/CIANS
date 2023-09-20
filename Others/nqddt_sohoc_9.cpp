#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long a,b,cnt,ar[N],i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    ar[1] = ar[2] = 1;
    i = 2;
    while (true)
    {
        i += 1;
        ar[i] = ar[i - 1] + ar[i - 2];
        if (ar[i] >= a)
        {
            if (ar[i] <= b) cnt++;
            else break;
        }
    }
    cout << cnt;
}