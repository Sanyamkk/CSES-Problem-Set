#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    sort(nums.begin() , nums.end());
    int best=0;
    for(int i=0;i<n;i++){
        if(nums[i]>best+1)break;
        best+=nums[i];
    }cout<<best+1<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}