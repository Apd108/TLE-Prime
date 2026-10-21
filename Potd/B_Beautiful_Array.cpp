#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k,b,s;
  cin >> n >> k >> b >> s;
  if(s<k*b || s>=k*(b+1)+(n-1)*(k-1)){
    cout << -1 << '\n';
    return;
  }
  vector<int>v(n);
  v[0]=min(s,k*(b+1)-1);
  s-=v[0];
  for(int i=1;i<n;i++){
    if(s>0){
        v[i]=min(s,k-1);
        s-=v[i];
    }
    else v[i]=0;
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