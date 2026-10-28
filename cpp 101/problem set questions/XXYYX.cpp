#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,a,b,c,d;
  cin >> n >> a >> b >> c >> d;
  if(abs(b-c)>1){
    cout << "No";
    return;
  }
  if(a>=1 && d>=1){
    if(c==0 && b==0){
        cout << "No";
        return;
    }
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