#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  unordered_set<int>s;
  for(int i=0;i<n;i++){
    if(v[i]<=k) s.insert(v[i]);
  }  
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(v[i]+v[j]<=k) s.insert(v[i]+v[j]);
    }
  }
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int l=j+1;l<n;l++){
        if(v[i]+v[j]+v[l]<=k) s.insert(v[i]+v[j]+v[l]);
      }
    }
  }
  cout << s.size();
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}