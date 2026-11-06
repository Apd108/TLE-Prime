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

  //strings
  // vector of chars
  string s1="Apd";
  for(char c:s1){
    cout << c;
  }
  //string concat
  string a="abc";
  string b="def";
  cout << a+" "+b; //concat is O(n);
  sort(a.begin(),a.end()); // <-- sorts in lexicographical order and complexity is O(nlogn)
  vector<string>v1={"abc","def","ghi"};
  sort(v.begin(),v.end());
  for(string s:v1) cout << s << '\n';  //TC-O(n*mlogm) m- number of strings
  s1="Hello world";
  string sub=s1.substr(0,5);
  cout << sub << '\n';  //TC-O(logn)

  vector<int>freq(26,0);
  for(char c:s1)
  freq[c-'a']++;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}