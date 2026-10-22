#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,k;
   cin >> n >> k;
   char a[n][k];
   for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
        cin >> a[i][j];
    }
   } 
   int cnt=1;
   for(int i=1;i<n;i++){
    bool temp=0;
    for(int j=0;j<k;j++){
        if(a[i][j]!=a[0][j]){
            temp=1;
            break;
        }
    }
    if(!temp) cnt++;
   }
   cout << cnt << '\n';
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