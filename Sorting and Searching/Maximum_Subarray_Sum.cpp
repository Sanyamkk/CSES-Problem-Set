#include<bits/stdc++.h>
using namespace std;

#define int long long 
void solve(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    vector<int >dp(n , LLONG_MIN);
    dp[0]=nums[0];

    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+nums[i] , nums[i]);
    }
    cout<<*max_element(dp.begin() , dp.end());
    return ;
}int32_t main(){
    solve();
    return 0;
}