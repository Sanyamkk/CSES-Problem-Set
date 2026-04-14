#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){
    int n , x;
    cin>>n>>x;
    vector<int >nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    sort(nums.begin() , nums.end());
    int cnt=0;
    int i=0 , j=n-1;
    while(i<=j){
        if(nums[i]+nums[j]>x){
            cnt++;
            j--;
        }else if(nums[i]+nums[j]<=x){
            cnt++;
            i++;
            j--;
        }
    }
    cout<<cnt<<endl;
    return ;
}
int32_t main(){
    solve();
    return 0;
}