#include <bits/stdc++.h>

using namespace std;

set<int> s;

int main()
{
    int x;
    for (int i = 1;i <= 4;i++)
    {
        cin >> x;
        s.insert(x);
    }    
    cout << 4 - s.size();
}