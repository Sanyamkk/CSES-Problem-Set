#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'
void solve(){

    int n , m;
    cin>>n>>m;
    vector<int >b(m);
    multiset<int >ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }vector<int >ans;
    for(int i=0;i<m;i++){
        cin>>b[i];
        auto it=ml.upper_bound(b[i]);
        if(it==ml.begin()){
            ans.push_back(-1);
        }else{
            --it;
            ans.push_back(*it);
            ml.erase(it);
        }
    }for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }cout<<endl;
}
int32_t main(){
    solve();
    return 0;
}