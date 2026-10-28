#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a=0,d=0;
  for(int i=0;i<s.size();i++){
    a+=s[i]=='A';
    d+=s[i]=='D';
  }
  cout << (a>d ? "Anton" : d>a ? "Danik" : "Friendship");
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}