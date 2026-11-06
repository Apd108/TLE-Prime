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
    ll n,m;
    cin >> n >> m;
    vector<vll>v(n,vll(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    vector<vll>p_x(n+1,vll(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            p_x[i][j]=v[i-1][j-1];
            p_x[i][j]^=v[i-1][j];
            p_x[i][j]^=v[i][j-1];
            p_x[i][j]^=v[i-1][j-1];
        }
    }
    ll q;
    cin >> q;
    while(q--){
        ll x1,y1,x2,y2;
        ll ans=p_x[x2][y2]^p_x[x1-1][y2]^p_x[x2][y1-1]^p_x[x1-1][y1-1];
        cout << ans << nl;
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