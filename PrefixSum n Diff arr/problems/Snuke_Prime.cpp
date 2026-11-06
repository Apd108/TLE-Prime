#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;

#define pb push_back
#define pp pop_back()
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rev(x) reverse(all(x))
#define sz(x) (ll)(x).size()
#define maxe(x) *max_element(all(x))
#define mine(x) *min_element(all(x))
#define occ(x, v) (ll)count(all(x), v)
#define uniq(x) (x).erase(unique(all(x)), (x).end())
#define acc(x) accumulate(all(x), 0LL)
#define psum(a, p) partial_sum(all(a), (p).begin() + 1)
#define lb(x, v) (ll)(lower_bound(all(x), v) - (x).begin())
#define ub(x, v) (ll)(upper_bound(all(x), v) - (x).begin())
#define nl '\n'

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll mxd=1e6+10;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
ll ceil_div(ll a, ll b) { return (a + b - 1) / b; }

void solve() {
    ll n,c;
    cin >> n >> c;
    vll st(n),fin(n),cost(n);
    for(int i=0;i<n;i++){
        cin >> st[i] >> fin[i] >> cost[i]; 
    }
    set<ll> coord;
    for(int i=0;i<n;i++){
        coord.insert(st[i]);
        coord.insert(fin[i]+1);
    }
    map<ll,ll>mp;
    ll rank=0;
    for(auto x:coord){
        mp[x]=rank;
        rank++;
    }
    ll m=rank;
    vll diff(m+1,0);
    for(int i=0;i<n;i++){
        ll left=mp[st[i]];
        ll right=mp[fin[i]+1];
        diff[left]+=cost[i];
        diff[right]-=cost[i];
    }
    for(int i=1;i<m;i++){
        diff[i]+=diff[i-1];
    }
    vll og(all(coord));        // copies all the elements from the set coord to the vector og
    ll ans=0;
    for(int i=1;i<m;i++){
        ll span=og[i]-og[i-1];
        ans+=min(diff[i-1],c)*span;
    }
    cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}