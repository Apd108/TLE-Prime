#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  vector<int>big(n);
  for(int i=0;i<n;i++){
    if(i==0) big[i]=v[i];
    else big[i]=max(big[i-1],v[i]);
  }
  int sum=0;
  for(int i=0;i<n;i++){
    int ans=sum+big[n-i-1];
    cout << ans << " ";
    sum+=v[n-i-1];
  }
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