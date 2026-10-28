#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x;
  cin >> x;
  vector<int>v;
  int temp=x;
  while(temp){
    v.push_back(temp%2);
    temp/=2;
  }
  v.push_back(0);
  for(int i=0;i<v.size()-1;i++){
    if(v[i+1]==v[i] && v[i]==1){
        v[i]=-1;
        int j=i+1;
        while(v[j]==1){
            v[j++]=0;
        }
        v[j]=1;
        i=j-1;
    }
  }
  cout << v.size() << '\n';
  for(auto x:v) cout << x << " ";
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