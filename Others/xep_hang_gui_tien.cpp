#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n;
pair<int, int> in[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> in[i].second >> in[i].first;
    sort(in + 1,in + 1 + n); 
    //for (int i = 1;i <= n;++i) cout << in[i].second << " " << in[i].first << endl;
    priority_queue<int, vector<int>, greater<int>> q;
    int res = 0;
    for (int i = 1;i <= n;i++) 
    {
        if (in[i].first >= q.size())
        {
            q.push(in[i].second);
            res += in[i].second;
        }
        else
        {
            if (in[i].second > q.top()) 
            {
                res -= q.top();
                q.pop();
                q.push(in[i].second);
                res += in[i].second;
            }
        }
    }
    cout << res;
}