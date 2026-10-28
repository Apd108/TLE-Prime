#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  // 2d vector :-
  vector<vector<int>>v(5,vector<int>(4,8));
  for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        cout << v[i][j] << " ";
    }
    cout << '\n';
  }

  //sets
  set<int>s;
  s.insert(4);
  s.insert(9);
  s.insert(2);
  s.insert(8);
  s.insert(7);
  s.insert(4);
  for(auto it:s) cout << it << '\n';

  set<pair<int,int>>points;
  points.insert({1,2});
  points.insert({3,6});
  points.insert({1,8});
  points.insert({1,2});
  for(auto it:points){
    cout << '(' << it.first << ',' << it.second << ") ";
    
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