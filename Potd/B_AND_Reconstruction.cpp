#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>a(n);
  vector<int>b(n-1);
  for(auto &x:b) cin >> x;
  a[0]=b[0];
  a[n-1]=b[n-2];
  for(int i=1;i<n-1;i++){
    a[i]=b[i]|b[i-1];
  }
  bool temp=1;
  for(int i=0;i<n-1;i++){
    if((a[i]&a[i+1])!=b[i]){
        temp=0;
        break;
    }
  }
  if(temp){
    for(auto x:a) cout << x << " ";
    cout << '\n';
  }
  else cout << -1 << '\n';
  
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