#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  bool temp=1;
  vector<int>ans;
  if(v[0]>9 && (v[0]/10<=v[0]%10)){
    ans.push_back(v[0]/10);
    ans.push_back(v[0]%10);
  }
  else ans.push_back(v[0]);
  for(int i=1;i<n;i++){
    if(v[i]>9 && (v[i]/10>=ans.back()) && (v[i]/10<=v[i]%10)){
        ans.push_back(v[i]/10);
        ans.push_back(v[i]%10);
    }
    else{
        if(v[i]<ans.back()){
            temp=0;
            break;
        }
        ans.push_back(v[i]);
    }
  }
  if(!temp) cout << "NO" << '\n';
  else cout << "YES" << '\n';
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