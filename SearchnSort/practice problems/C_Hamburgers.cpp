#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  int a1,a2,a3;
  int b1,b2,b3;
  int r;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> r;
  int cntb=0,cnts=0,cntc=0;
  for(char c:s){
    cntb+=c=='B';
    cnts+=c=='S';
    cntc+=c=='C';
  }
  int ans=0;
  if(cntb==0) a1=0;
  if(cnts==0) a2=0;
  if(cntc==0) a3=0;
  while(!(a1==0 && a2==0 && a3==0)){
    if(a1<cntb){
        r-=(cntb-a1)*b1;
        a1=cntb;
    }
    if(a2<cnts){
        r-=(cnts-a2)*b2;
        a2=cnts;
    }
    if(a3<cntc){
        r-=(cntc-a3)*b3;
        a3=cntc;
    }
    if(r<0){
         cout << ans << '\n';
         return;
    }
    a1-=cntb;a2-=cnts;a3-=cntc;
    ans++;
  }
  int rem=cntb*b1+cnts*b2+cntc*b3;
  ans+=r/rem;
  cout << ans; 
  //ik we can use binary search it clicked me lately i ll do this question again using bs
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}