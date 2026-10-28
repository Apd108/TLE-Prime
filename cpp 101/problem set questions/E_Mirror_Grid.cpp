#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<vector<char>>v(n,vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin >> v[i][j];
    }
  }
  int x=n/2;
  int y=(n+1)/2;
  int ans=0;
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        int temp=(v[i][j]-'0')+(v[j][n-i-1]-'0')+(v[n-i-1][n-j-1]-'0')+(v[n-j-1][i]-'0');
        ans+=min(temp,4-temp);
    }
  }
  cout << ans << '\n';
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