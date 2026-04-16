#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int >nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    map<int , int >mp;
    int l=0;
    int maxi=INT_MIN;
    for(int r=0;r<n;r++){
        while(mp.find(nums[r])!=mp.end()){
            mp[nums[l]]--;
            if(mp[nums[l]]==0)mp.erase(nums[l]);
            l++;
        }
        mp[nums[r]]++;
        maxi=max(maxi , r-l+1);
    }cout<<maxi<<endl;
    return ;
}int32_t main(){
    solve();
    return 0;
}