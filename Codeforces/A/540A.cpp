#include <bits/stdc++.h>

using namespace std;

int n, i, t1, t2, res = 0;
string original, new_combination;

int main() 
{
    cin >> n >> original >> new_combination;
    for (i = 0;i < n;i++) 
    {
        t1 = abs(original[i] - new_combination[i]);
        t2 = 10 - t1;
        res += min(t1, t2);
    }
    cout << res;
}