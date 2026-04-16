#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    int maxi=INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++){
        if(nums[i]<maxi)continue;
        if(nums[i]>=maxi){
            ans++;
            maxi=max(maxi , nums[i]);
        }
    }cout<<ans<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}