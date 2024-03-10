#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int k,a,b,res;
bool ch[N];

void calc()
{
    for (int i = 0;i <= N;++i) ch[i] = true;
    ch[0] = ch[1] = false;
    for (int i = 2;i * i <= N;++i)
        if (ch[i] == true)
            for (int j = i * i;j <= N;j += i)
                ch[j] = false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> a >> b;
    int temp = pow(10, k - 1);
    a = max(a, temp);
    double t = 9.999999;
    int tt = floor(t * temp);
    b = min(b, tt);
    //cout << a << " " << b << "\n";
    calc();
    for (int i = a;i <= b;++i)
        if (ch[i] == true) res++;
    cout << res;
}