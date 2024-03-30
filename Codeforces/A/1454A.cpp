#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int>v;
        for(int i = n;i > 0;i--) v.push_back(i);
        for(int i = 0;i < n;i++) if (v[i] == i + 1) swap(v[i], v[i +1 ]);
        for(int i = 0;i < n;i++) cout << v[i] <<" ";
        cout << endl;
    }
}