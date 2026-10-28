#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  vector<int>prefix(n+1,0);
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=v[i];
    prefix[i]=sum;
  }
  for(int i=1;i<n;i++){
    v[i]=min(v[i-1],prefix[i]/(i+1));
  }
  for(auto x:v) cout << x << " ";
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