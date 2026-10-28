#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int m,n;
  cin >> m >> n;
  vector<int>a(m);  
  vector<int>b(n);
  for(auto &x:a) cin >> x;  
  for(auto &x:b) cin >> x;
  for(int i=0;i<n;i++){
    auto it=find(a.begin(),a.end(),b[i]);
    if(it==a.end()){
        cout << "No";
        return;
    }
    else a.erase(it);
  }  
  cout << "Yes";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}