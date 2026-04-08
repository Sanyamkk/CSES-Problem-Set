#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'

void solve(){

    int n;
    cin>>n;
    set<int >s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }cout<<s.size()<<endl;
    return ;
}
int32_t main(){
    solve();
    return 0;
}