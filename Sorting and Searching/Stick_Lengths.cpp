#include<bits/stdc++.h>
using namespace std;
#define int long long 

#define int long long 
void solve(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }sort(nums.begin() , nums.end());
    int val=nums[n/2];
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=abs(val-nums[i]);
    }cout<<cnt<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}