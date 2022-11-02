#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,i,k,a[N];

int calc()
{
    int dau = 1, cuoi = *max_element(a + 1,a + 1 + n), giua, kq;
    while (dau <= cuoi)
    {
        giua = (dau + cuoi) / 2;
        int tmp = 0;
        for (int j = 1;j <= n;j++) tmp += a[j] / giua;
        if (tmp >= k)
        {
            dau = giua + 1;
            kq = max(kq, giua);
        }
        else cuoi = giua - 1;
    }
    return kq;
}

int main()
{
    cin >> n >> k;
    for (i = 1;i <= n;i++) cin >> a[i];
    cout << calc();
}
