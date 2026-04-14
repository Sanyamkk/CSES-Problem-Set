#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int >nums(n-1);
    for(int i=0;i<n-1;i++)cin>>nums[i];
    sort(nums.begin() , nums.end());
    // for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";
    // cout<<endl;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=(i+1)){
            cout<<(i+1)<<endl;
            return ;
        }
    }cout<<n<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}