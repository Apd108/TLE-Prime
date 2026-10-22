#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>>v(n,vector<int>(m));
  int cost[n*m+1]={0};
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> v[i][j];
        if(cost[v[i][j]]==0) cost[v[i][j]]=1;
        if(j-1>=0 && v[i][j]==v[i][j-1] || i-1>=0 && v[i][j]==v[i-1][j]) cost[v[i][j]]=2; 
    }
  }
  int total=0;int temp=-1;
  for(int i=0;i<=n*m;i++){
    total+=cost[i];
    temp=max(temp,cost[i]);
  }
  cout << total-temp << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}