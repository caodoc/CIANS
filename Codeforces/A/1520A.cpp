#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        char str[n],tmp = s[0];
        int k = 0;
        int check = 1;
        for(int i = 0;i < n;i++)
        {
            if(s[i] != tmp)
            {
                str[k] = tmp;
                tmp = s[i];
                k++;
            }
            for(int j = 0; j < k; j++) if(s[i] == str[j])   
            {
                check = 0;
                break;
             }
            if(check == 0) break;
        }
        if(check == 1) cout << "YES"; else cout << "NO";
        cout << endl;
  }
}