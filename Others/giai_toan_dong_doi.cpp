#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,m;

struct infor
{
    int tongdiem;
    int thoigian;
    int sohieu;
};

bool comparestruct (infor a, infor b)
{
    if (a.tongdiem != b.tongdiem) return a.tongdiem >= b.tongdiem;
    if (a.thoigian != b.thoigian) return a.thoigian <= b.thoigian;
   return a.sohieu <= b.sohieu;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    infor teams[N];
    for (int i = 1;i <= n;i++) 
    {
        teams[i].sohieu = i;
        for (int j = 1;j <= m;j++)
        {
            int x;
            cin >> x;
            teams[i].thoigian += x;
            if (x != 0) teams[i].tongdiem += 10;
        }
    }
    //for (int i = 1;i <= n;i++)  cout << teams[i].tongdiem << " " << teams[i].thoigian << " " << teams[i].sohieu << endl;
    //cout << "--------------------------------------------------" << endl;
    sort(teams + 1,teams + 1 + n,comparestruct);
    //for (int i = 1;i <= n;i++) cout << teams[i].tongdiem << " " << teams[i].thoigian << " " << teams[i].sohieu << endl;
    cout << teams[1].sohieu << endl;
    for (int i = 2;i <= n;i++)
    {
        if (teams[i].tongdiem == teams[i - 1].tongdiem && teams[i].thoigian == teams[i - 1].thoigian) cout << teams[i].sohieu << endl; else break;
    }
}