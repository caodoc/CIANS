#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,k;
int ar[N],minRange[N];

deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;i++) cin >> ar[i];
    while (dq.size()) dq.pop_front();
    for (int i = 1;i <= n;++i) 
    {
        while (dq.size() && ar[dq.back()] >= ar[i]) dq.pop_back();
        dq.push_back(i); 
        if (dq.front() + k <= i) dq.pop_front(); 
        if (i >= k) minRange[i] = ar[dq.front()]; 
    }
    for (int i = k;i <= n;i++) cout << minRange[i] << endl;
}