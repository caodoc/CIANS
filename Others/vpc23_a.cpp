#include <bits/stdc++.h>

using namespace std;

int r,c,p,q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> r >> c;
    bool check = true;
    for (int i = 1;i <= r;++i)
    {
        int cnt = 0;
        char ch;
        for (int j = 1;j <= c;++j)
        {
            cin >> ch;
            if (check == true)
            {
                if (ch == '.') cnt += 1;
                else
                {
                    if (cnt == 3)
                    {
                        p = i;
                        q = j - 3;
                        check = false;
                    }
                    cnt = 0;
                }
                if (cnt == 3)
                {
                    p = i;
                    q = j - 2;
                    check = false;
                }
            }
        }
    }
    cout << p << " " << q;
}