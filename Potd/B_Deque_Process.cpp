#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  int j=0;int k=n-1;
  for(int i=0;i<n;i++){
    if(i%2==0){
        if(v[j]>v[k]){
            cout << 'L';
            j++;
        }
        else{
            cout << 'R';
            k--;
        }
    }
    else{
        if(v[j]<v[k]){
            cout << 'L';
            j++;
        }
        else{
            cout << 'R';
            k--;
        }
    }
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