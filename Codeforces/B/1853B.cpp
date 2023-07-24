#include <bits/stdc++.h>

using namespace std;

const int MAX = 200020;

int t,n,k;
long long nF,A[MAX],B[MAX];

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    nF = 2;
    A[1] = 1; B[1] = 0;
    A[2] = 0; B[2] = 1;
    for (int i = 3; ;++i)
    {
        if (A[i - 1] + A[i - 1] > 1e9 && B[i - 1] + B[i - 2] > 1e9)
        {
            nF = i - 1;
            break;
        }
        A[i] = A[i - 1] + A[i - 2];
        B[i] = B[i - 1] + B[i - 2];
    }

    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k > nF)
        {
            cout << "0 \n";
            continue;
        }
        long long res = 0;
        for (int x = 0; x <= n; ++x)
        {
            if (x > (n - A[k] * x) / B[k]) continue;
            res += (n - A[k] * x) % B[k] == 0;
        }
        cout << res << "\n";
    }
}