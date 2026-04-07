#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
void solve(){

    int n;
    cin>>n;
    const int mod=1e9+7;
    vector<vector<char>>nums(n , vector<char >(n));
    vector<vector<int >>dp(n+1 , vector<int >(n+1 , 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
            if(nums[i][j]=='*')dp[i][j]=-1;
        }
    }
    if(nums[0][0]=='*')dp[0][0]=-1;
    else dp[0][0]=1;
    for(int i=1;i<n;i++){
        if(dp[i][0]==-1)continue;
        dp[i][0]=dp[i-1][0];
    }for(int i=1;i<n;i++){
        if(dp[0][i]==-1)continue;
        dp[0][i]=dp[0][i-1];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(dp[i][j]==-1)continue;
            if(dp[i-1][j]!=-1)dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
            if(dp[i][j-1]!=-1)dp[i][j]=(dp[i][j]+dp[i][j-1])%mod;
        }
    }if(dp[n-1][n-1]==-1){
        cout<<0<<endl;
        return ;
    }cout<<dp[n-1][n-1]<<endl;
    return ;
}int32_t main(){
    solve();

}