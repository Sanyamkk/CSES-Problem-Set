#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){

    int n , k;
    cin>>n>>k;
    int x , a , b , c;
    cin>>x>>a>>b>>c;
    vector<int >nums(n);
    nums[0]=x;
    for(int i=1;i<n;i++){
        nums[i]=(a*nums[i-1]+b)%c;
    }
    deque<int >dq;
    int ans=0;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front()<i-k+1){
            dq.pop_front();
        }while(!dq.empty() && nums[dq.back()]>=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1){
            ans^=nums[dq.front()];
        }
    }cout<<ans<<endl;
    return;
}
int32_t main(){
    solve();
    return 0;
}