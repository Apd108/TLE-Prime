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
    vll diff(mxd,0);
    for(int i=0;i<n;i++){
        ll a,b,cost;
        cin >> a >> b >> cost;
        diff[a]+=cost;
        diff[b+1]-=cost;
    }
    vll actual(mxd+1,0);
    psum(diff,actual);
    ll ans=0;
    for(int i=1;i<=mxd;i++){
        ans+=min(actual[i],c);
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