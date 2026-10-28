#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s; cin >> s;
  int x=0,y=0,r=0;
  for(int i=0;i<n;i++){
    if(s[i]=='R') r++;
    else{
        if(r%4==0) x+=1;
        else if(r%4==1) y-=1;
        else if(r%4==2) x-=1;
        else y+=1;
    }
  }
  cout << x << " " << y;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}