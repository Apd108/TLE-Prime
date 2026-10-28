#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  vector<pair<int,int>>temp;
  for(int i=0;i<n;i++){
     temp.push_back({v[i],i});
  }
  sort(temp.rbegin(),temp.rend());
  vector<int>ans(n+1);
  ans[0]=0;
  int j=1;
  int sum=0;
  for(int i=0;i<n;i++){
    ans[temp[i].second + 1]=j;
    sum+=2*abs(j)*temp[i].first;
    if(j<0) j=abs(j)+1;
    else j*=(-1);
  }
  cout << sum << '\n';
  for(auto &x:ans) cout << x << " ";
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