#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  vector<char>v;
  for(auto &x:s) v.push_back(x);
  sort(v.begin(),v.end());
  for(auto x:v) cout << x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}