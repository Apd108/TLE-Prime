#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y;
  cin >> x >> y;
  cout << 2*(x-y) << '\n';
    for(int i=y;i<=x;i++){
        cout << i << " ";
    }
    for(int i=x-1;i>y;i--){
        cout << i << " ";
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