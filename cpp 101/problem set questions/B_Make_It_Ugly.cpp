#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int cnt=1,temp=1;
  for(auto x:v){
    if(x!=v[0]) temp=0;
  }
  if(n==1 || temp==1){
    cout << -1 << '\n';
    return;
  }
  vector<int>ans;
  for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]) cnt++;
    else{
        ans.push_back(cnt);
        cnt=1;
    }
  }
  ans.push_back(cnt);
  int mn=INT_MAX;
  for(int i=0;i<ans.size();i++){
    if(i%2==0) mn=min(mn,ans[i]);
  }
  cout << mn << '\n';
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