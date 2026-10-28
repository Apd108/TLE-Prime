#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string a,b,c;
  cin >> a >> b >> c;
  vector<int>freq(26,0);
  for(int i=0;i<max({a.size(),b.size(),c.size()});i++){
    if(i<a.size()) freq[a[i]-65]++;
    if(i<b.size()) freq[b[i]-65]++;
    if(i<c.size()) freq[c[i]-65]--;
  }  
  for(auto x:freq){
    if(x!=0){
        cout << "NO";
        return;
    }
  }
  cout << "YES";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}