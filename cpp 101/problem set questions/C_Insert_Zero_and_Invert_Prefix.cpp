#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int b=0;
  vector<int>ans;
  for(int i=0;i<n;i++){
    if(v[i]==1) b++;
    else{
        ans.push_back(b);
        b=0;
    }
  }  
  if(v.back()==1){
    cout << "NO" << '\n';
    return;
  } else cout << "YES" << '\n';
  for(int i=ans.size()-1;i>=0;i--){
    for(int j=ans[i];j>0;j--){
        cout << 0 << " ";
    }
    cout << ans[i] << " ";
  }
  cout << '\n';
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