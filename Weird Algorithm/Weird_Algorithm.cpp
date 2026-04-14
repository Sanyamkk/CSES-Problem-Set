#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==1){
            n=(n*3+1);
            cout<<n<<" ";
        }else{
            n=n/2;
            cout<<n<<" ";
        }
    }cout<<endl;
    
    return ;
}
int32_t main(){
    solve();
    return 0;
}