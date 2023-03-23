#include<bits/stdc++.h>

using namespace std;

int t;
string s;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        int pos1,pos2,res;
        pos1 = pos2 = res = 0;
        for (int i = 0;i < s.size();i++)
            if (s[i] == '1')
            {
                pos1 = i;
                break;
            }
        for (int i = s.size();i >= pos1;i--)
            if (s[i] == '1')
            {
                pos2 = i;
                break;
            }
        for (int i = pos1;i < pos2;i++)
            if( s[i] == '0') res++;
        cout << res << endl;
    }
}