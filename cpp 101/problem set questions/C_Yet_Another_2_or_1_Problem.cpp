#include<bits/stdc++.h>
using namespace std;
#define int long long
bool pal(string &s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) return 0; 
    }
    return 1;
}
bool same(string &s){
    for(char c:s){
        if(c!=s[0]) return 0;
    }
    return 1;
}
void solve(){
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  string ans="";
  int temp=0;
  for(int i=0;i<k;i++){
    if(same(s)){                 // had to do this everytime we are changing s, saw editorial coz i m dumb
        s.append(k-i,s[0]);
        break;
    }
    if(pal(s)){
        s+=s.back();
    }
    else s.resize(s.size()/2);
  }
  cout << s << '\n';
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