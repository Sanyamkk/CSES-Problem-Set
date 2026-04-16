#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , x;
    cin>>n>>x;
    vector<int >nums(n);
    map<int , int >mp;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        int cmp=x-nums[i];
        if(mp.find(cmp)!=mp.end()){
            cout<<mp[cmp]+1<<" "<<i+1<<endl;
            return ;
        }mp[nums[i]]=i;
    }cout<<"IMPOSSIBLE"<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}