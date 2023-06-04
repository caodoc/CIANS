#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<int> nums;
    int x;
    for (int i = 0;i < n;++i) 
    {
        cin >> x;
        nums.push_back(x);
    }
    int n = nums.size();
    vector<int> dp;
    for (int i = 0;i < n;++i)
    {
        int temp = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
        if (temp >= dp.size()) dp.push_back(nums[i]);
        else dp[temp] = nums[i];
    }
    cout << dp.size();
}