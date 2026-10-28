#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>>v(n);
    for(auto &x:v) cin >> x.first >> x.second;
    sort(v.begin(),v.end());
    int temp=1;
    for(int i=0;i<n;i++){
        if(s>v[i].first) s+=v[i].second;
        else{
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}