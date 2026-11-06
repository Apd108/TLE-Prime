#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;cin >> n;
  vector<pair<int,int>>v(n);
  for(auto &x:v) cin >> x.first >> x.second;
  sort(v.begin(),v.end());
  int x=0;int y=0;string ans="";
  for(int i=0;i<n;i++){
    if(v[i].first>=x){
        ans+=string(v[i].first-x,'R');
        x=v[i].first;
    }
    else{
        cout << "NO" << '\n';
        return;
    }
    if(v[i].second>=y){
        ans+=string(v[i].second-y,'U');
        y=v[i].second;
    }
    else{
        cout << "NO" << '\n';
        return;
    }
  }  
  cout << "YES" << '\n' << ans << '\n';
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