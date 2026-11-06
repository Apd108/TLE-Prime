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

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
ll ceil_div(ll a, ll b) { return (a + b - 1) / b; }

void solve() {
    ll n,q;
    cin >> n >> q;
    vll a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    vll p(n+1,0);
    vll wp(n+1,0);
    psum(a,p);
    wp[0]=0;
    for(int i=1;i<=n;i++){
        wp[i]=wp[i-1]+i*a[i-1];
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        ll temp1=wp[r]-wp[l-1];
        ll temp2=(l-1)*(p[r]-p[l-1]);
        cout << temp1-temp2 << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}