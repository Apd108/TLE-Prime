#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int k,n,m;
  cin >> k >> n >> m;
  vector<int>a(n);  
  vector<int>b(m);
  vector<int>ans;
  for(auto &x:a) cin >> x;
  for(auto &x:b) cin >> x;
  int i=0;int j=0;
  while(i<n || j<m){
    if(i<n && a[i]<=k){
        ans.push_back(a[i]);
        if(a[i]==0) k++;
        i++;
    }
    else if(j<m && b[j]<=k){
        if(b[j]<=k){
            ans.push_back(b[j]);
            if(b[j]==0) k++;
            j++;
        }
    }
    else{
        cout << -1 << '\n';
        return;
    }
  }
  for(auto x:ans) cout << x << " ";
  cout << '\n';
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