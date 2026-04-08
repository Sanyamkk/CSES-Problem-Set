#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){
    const int mod=1e9+7;
    int n ,m;
    cin>>n>>m;
    vector<int >nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    vector<int >dp(n+1 , 0);
    if(nums[0]!=0)dp[0]=1;
    else dp[0]=m;
    for(int i=1;i<n-1;i++){
        if(nums[i]!=0){
            dp[i]=dp[i-1];
            continue;
        }
        int prev=nums[i-1];
        int frd=nums[i+1];
        int cnt=0;
        for(int j=1;j<=m;j++){
            if(abs(j-prev)<=1 && abs(j-frd)<=1)cnt++;
        }
        dp[i]=cnt;
    }int cnt=0;
    if(nums[n-1]==0){
        for(int j=1;j<=m;j++){
            if(abs(j-nums[n-2])<=1 && abs(j-nums[n-2])<=1)cnt++;
        }
    }else cnt=dp[n-2];
    dp[n-1]=cnt;
    cout<<dp[n-1]<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}