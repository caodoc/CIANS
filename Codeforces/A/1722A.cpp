#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        if (n != 5) cout << "NO";
        else
        {
            int t1,t2,t3,t4,t5;
            t1 = t2 = t3 = t4 = t5 = 0;
            for (int i = 0;i < n;i++)
            {
                if (s[i] == 'T') t1++;
                if (s[i] == 'i') t2++;
                if (s[i] == 'm') t3++;
                if (s[i] == 'u') t4++;
                if (s[i] == 'r') t5++;
            }
            if (t1 == 1 && t2 == 1 && t3 == 1 && t4 == 1 && t5 == 1) cout << "YES"; else cout << "NO";
        }
        cout << endl;
    }
}