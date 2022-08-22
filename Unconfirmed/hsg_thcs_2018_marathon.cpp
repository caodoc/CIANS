#include<bits/stdc++.h>

using namespace std;

int n,i,a;
set<int> s;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        cin >> a;
        s.insert(a);
    }
    cout << s.size();
    return 0;
}