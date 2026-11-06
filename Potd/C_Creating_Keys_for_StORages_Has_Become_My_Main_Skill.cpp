#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,x;
  cin >> n >> x;
  int temp=x;
  vector<int>bin;
  vector<int>ans;
  int cnt=0;int mn=INT_MAX;int one=0;int zero=0;
  while(temp>0){
    bin.push_back(temp%2);
    if(temp%2==0){
        mn=min(mn,cnt);
        zero++;
    }
    else one++;
    temp/=2;
    cnt++;
  }
  int y=0;
  if(mn!=INT_MAX) y=pow(2,mn);
  int k=pow(2,(one-1));
  if(x%2==0){
    for(int i=0;i<n-1;i++){
        cout << 0 << " ";
    }
    cout << x << '\n';
  }
  else{
    if(zero){
        cout << x << " ";
        for(int i=0;i<n-1;i++){
            if(i<y) cout << i << " ";
            else cout << 0 << " ";
        }
        cout << '\n';
    }
    else{
        if(n-1>=k){
            for(int i=0;i<n;i++){
                if(i<=x) cout << i << " ";
                else cout << x << " ";
            }
            cout << '\n';
        }
        else{
            cout << x << " ";
            for(int i=0;i<n-1;i++){
                cout << i << " ";
            }
            cout << '\n';
        }
    }
  }
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