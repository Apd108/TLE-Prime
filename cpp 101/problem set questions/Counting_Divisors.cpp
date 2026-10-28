#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int cnt=0;
  for(int i=1;i*i<=n;i++){
    if(i*i==n) cnt++;
    else if(n%i==0) cnt+=2;
  }  
  cout << cnt << '\n';
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