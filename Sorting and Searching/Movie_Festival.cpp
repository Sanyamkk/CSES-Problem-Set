#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){

    int n;
    cin>>n;
    vector<pair<int , int >>nums;
    for(int i=0;i<n;i++){
        int a , b;
        cin>>a>>b;
        nums.push_back({a , +1});
        nums.push_back({b , -1});
    }sort(nums.begin() , nums.end());
    int ans=0 , maxi=0;
    for(auto i : nums){
        maxi+=i.second;
        ans=max(maxi , ans);
    }cout<<ans<<endl;
    return ;
}
int32_t main(){
    solve();
    return 0;
}