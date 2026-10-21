#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  vector<int>v(n);
  bool hard=false;
  for(auto &x:v){
    cin >> x;
    if(x==1) hard=true;
  }
  cout << (hard==true ? "HARD" : "EASY");
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}