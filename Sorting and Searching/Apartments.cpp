#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){

    int n , m , k;
    cin>>n>>m>>k;
    vector<int >a(n) , b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int cnt=0;
    int i=0 , j=0;
    while(i<n && j<m){
        if(b[j]<a[i]-k){
           j++;
        }else if(b[j]>a[i]+k){
            i++;
        }else {
            cnt++;
            i++ , j++;
        }
    }
    cout<<cnt<<endl;
    return ;
}
int32_t main(){
    solve();
    return 0;
}