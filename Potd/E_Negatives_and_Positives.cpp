#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int num=0;int mn=INT_MAX;int sum=0;
  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    mn=min(mn,abs(x));
    sum+=abs(x);
    if(x<0) num++;
  }  
  if(num%2==0)  cout << sum << '\n';
  else cout << sum-2*mn << '\n';
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