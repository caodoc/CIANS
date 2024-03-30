#include<bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        int t1,t2;
        t1 = t2 = 0;
        int cnt[26] = {0};
        cin >> s;
        for (int i = 0;i < s.size();i++) cnt[s[i] - 'a']++;
        for (auto i : cnt)
        {
            if (i == 1) t1++;
            else if (i > 1) t2++;
        }
        cout << t1 / 2 + t2 << endl;
    }
}