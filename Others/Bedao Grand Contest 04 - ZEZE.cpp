#include <bits/stdc++.h>

using namespace std;

int m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m;
    int x;
    int a,b,c;
    a = b = c = 0;
    while (m--)
    {
        cin >> x;
        if (x == 10) a++;
        else
        {
            while (x % 2 == 0)
            {
                b++;
                x /= 2;
            }
            while (x % 5 == 0)
            {
                c++;
                x /= 5;
            }
        }
    }
    cout << a + min(b, c);
}