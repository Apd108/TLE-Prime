// again hackerearth but this a meh type question
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i==0 || i==n-1 || (i+j+1==n)){
          cout << "*" ;
        } else cout << " ";
      } cout << '\n';
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