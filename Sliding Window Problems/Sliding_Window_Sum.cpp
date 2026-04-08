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
    int l=0;
    int sum=0 , ans=0;
    for(int r=0 ;r<n;r++){
        sum+=nums[r];
        while((r-l+1)>k){
            sum-=nums[l];
            l++;
        }
        if((r-l+1)==k){
            ans^=sum;
        }
    }cout<<ans<<endl;
    return ;
}
int32_t main(){
    solve();
    return 0;
}