#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int o=0,t=0,th=0;
  vector<int>one;vector<int>two;vector<int>three;
  for(int i=0;i<n;i++){
    if(v[i]==1){
        o++;
        one.push_back(i+1);
    }
    else if(v[i]==2){
        t++;
        two.push_back(i+1);
    }
    else{
        th++;
        three.push_back(i+1);
    }
  }  
  int a=min({o,t,th});
  cout << a << '\n';
  if(a){
    vector<vector<int>>v(a,vector<int>(3));
    for(int i=0;i<a;i++){
        cout << one[i] << " " << two[i] << " " << three[i] << " ";
        cout << '\n';
    }
  }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}