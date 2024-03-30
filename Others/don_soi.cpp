#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n;
long long res;
priority_queue<int, vector<int>, greater<int>> q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int x;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        q.push(x);
    }
    while (q.size() != 1)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        res += a + b;
        q.push(a + b);
    }
    cout << res;
}