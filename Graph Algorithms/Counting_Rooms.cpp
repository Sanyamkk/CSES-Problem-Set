#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'

bool check(int i , int j , int n , int m){
    return (i>-1 && i<n && j>-1 && j<m);
}
void solve1(vector<vector<char>>&nums , int i , int j){
    int row[4]={0 , -1 , 0,+1};
    int col[4]={-1,0,+1,0};
    int n=nums.size();
    int m=nums[0].size();
    queue<pair<int , int >>q;
    q.push({i , j});
    nums[i][j]='#';
    while(!q.empty()){
        i=q.front().first;
        j=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int ni=i+row[k];
            int nj=j+col[k];
            if(check(ni , nj , n , m) && nums[ni][nj]=='.' ){
                nums[ni][nj]='#';
                q.push({ni , nj});
            }
        }
    }
}
void solve(){

    int n , m;
    cin>>n>>m;
    vector<vector<char>>nums(n , vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]=='.'){
                solve1(nums , i , j);
                cnt++;
            }
        }
    }cout<<cnt<<endl;
    return ;
}
int32_t main(){
    solve();
    return 0;
}