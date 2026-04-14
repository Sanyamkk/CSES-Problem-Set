#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'

bool check(int i , int j , int n , int m){
    return (i>-1 && i<n && j>-1 && j<m);
}

void solve(){
    int n , m;
    cin>>n>>m;
    vector<vector<char>>nums(n , vector<char>(m));
    queue<tuple<int , int , int , string>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
            if(nums[i][j]=='A') q.push({i , j , 0 , ""});
        }
    }
    vector<pair<int , char>> row = {{0,'L'},{-1,'U'},{0,'R'},{+1,'D'}};
    int col[4]={-1,0,+1,0};

    while(!q.empty()){
        auto [i , j , timer , path] = q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int ni = i + row[k].first;
            int nj = j + col[k];
            if(check(ni , nj , n , m)){
                if(nums[ni][nj]=='B'){
                    cout<<"YES"<<endl;
                    cout<<timer+1<<endl;
                    cout<<path + row[k].second<<endl;
                    return;
                }else if(nums[ni][nj]=='.'){
                    nums[ni][nj]='#';
                    q.push({ni , nj , timer+1 , path + row[k].second});
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}

int32_t main(){
    solve();
    return 0;
}