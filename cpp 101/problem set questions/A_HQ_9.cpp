#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        cout << "YES" << '\n';
        return;
    }
  }  
  cout << "NO" << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}