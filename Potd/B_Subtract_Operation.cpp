#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  vector<int>ans;
  sort(v.begin(),v.end());
  // specifically went and saw the two pointer lecture in tle prime to solve this question coz i wastired of being constrained to solve 2 pointer questions with either bs or patterns
  int j=0;
  for(int i=0;i<n;i++){
        while(j<n){
            if(v[j]-v[i]<k) j++;
            else break;
        }
        if(j<n && v[j]-v[i]==k){
        cout << "YES" << '\n';
        return;
    }
  }
  cout << "NO" << '\n';
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