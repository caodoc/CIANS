#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) 
    {
        if (i % 2 != 0) cout << "I hate "; else cout << "I love ";
        if (i < n) cout << "that "; else cout << "it"; 
    }
}