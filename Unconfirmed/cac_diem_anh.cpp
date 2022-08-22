#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

const int N = 1e6;

int a,b[N],n,i;
set<int> s;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        cin >> a;
        s.insert(a);
        b[a]++;
    }
    cout << s.size() << endl << max_element(b + 1,b + 1 + n);
}