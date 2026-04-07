#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve()
{

    const int mod=1e9+7;
    int n;
    cin>>n;
    vector<int >dp(n+10 , LLONG_MAX);
    dp[0]=0;
    for(int i=1;i<10;i++)dp[i]=1;
    for(int i=10;i<=n;i++){
        int num=i;
        while(num){
            int rem=num%10;
            num/=10;
            if(rem==0) continue;
            dp[i]=min(dp[i] , 1+dp[i-rem]);
        }
    }
    cout<<dp[n]<<endl;
}int32_t main(){
    solve();
}