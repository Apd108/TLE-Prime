#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int>freq(26,0);
  int ans=0,temp=0;
  for(int i=0;i<n;i++){
    freq[s[i]-97]++;
  }
  for(auto x:freq){
    if(x==0) temp++;
    if(x>1) ans+=(x-1);
  }
  if(ans<=temp) cout << ans;
  else cout << -1;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}