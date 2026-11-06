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
    ll n,m,k;
    cin >> n >> m >> k;
    vll v(n);
    for(auto &x:v) cin >> x;
    vll diff(n,0);
    diff[0]=v[0];
    for(ll i=1;i<n;i++){
        diff[i]=v[i]-v[i-1];
    }
    vll a(m),b(m),c(m);
    for(ll i=0;i<m;i++){
        cin >> a[i] >> b[i] >> c[i];
        a[i]--;
        b[i]--;
    }
    vll td(m,0);
    for(ll i=0;i<k;i++){
        ll x,y;
        cin >> x >> y;
        x--;y--;
        td[x]++;
        if(y+1<m) td[y+1]--;
    }
    vll pd(m+1,0);
    psum(td,pd);
    for(ll i=1;i<=m;i++){
        ll z=pd[i];
        diff[a[i-1]]+=c[i-1]*z;
        if(b[i-1]+1<n) diff[b[i-1]+1]-=c[i-1]*z;
    }
    vll p(n+1,0);
    psum(diff,p);
    for(ll i=1;i<=n;i++){
        cout << p[i] << " ";
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