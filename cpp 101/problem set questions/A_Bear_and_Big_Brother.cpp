#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b;
  cin >> a >> b;
  int cnt=0;
  while(a<=b){
    a*=3;
    b*=2;
    cnt++;
  }
  cout << cnt;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}