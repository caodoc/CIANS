#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int res1 = 0,res2 = 0,res3 = 0;
    for (int i = 1;i <= n;i++)
    {
        int x,y;
        cin >> x >> y;
        if (x > y) res1++; else if (y > x) res2++; else res3++;
    }
    if (res1 == res2) cout << "Friendship is magic!^^";
    else if ((res1 > res2 && res1 > res3) || (res1 >= n - res3)) cout << "Mishka";
    else if ((res2 > res1 && res2 > res3) || (res2 >= n - res3)) cout << "Chris";
}