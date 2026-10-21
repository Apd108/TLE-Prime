#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  sort(v.begin(),v.end());
  int big=INT_MIN;
  v.erase(unique(v.begin(),v.end()),v.end());
  for(int i=0;i<v.size();i++){
    int temp=v[i]+n-1;
    int x=upper_bound(v.begin(),v.end(),temp)-v.begin();
    big=max(x-i,big);
  } 
  cout << big << '\n';
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