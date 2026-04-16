#include<bits/stdc++.h>
using namespace std;


#define endl '\n'
void solve(){
    int n;
    cin>>n;
    vector<int >nums(n);
    map<int , int >mp;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        mp[nums[i]]=i;
        
    }int cnt=0;
    if(is_sorted(nums.begin() , nums.end())){
        cout<<1<<endl;
        return ;
    }if(is_sorted(nums.rbegin() , nums.rend())){
        cout<<n<<endl;
        return ;
    }for(int i=1;i<=n;i++){
        int cmp=i+1;
        if(mp.find(cmp)==mp.end())continue;
        if(mp[i]<mp[cmp])continue;
        cnt++;
    }cnt++;
    cout<<cnt<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}