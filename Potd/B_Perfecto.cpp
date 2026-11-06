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
bool is_square(ll n){
    ll x=round(sqrtl(n));
    return x*x==n;
}
void solve() {
    ll n;
    cin >> n;
    if(is_square((n*(n+1))/2)){
        cout << -1 << nl;
        return;
    }
    vll v(n);
    for(ll i=0;i<n;i++){
        v[i]=i+1;
    }
    ll pre=0;
    for(ll i=0;i<n;i++){
        pre+=v[i];
        if(is_square(pre)){
            swap(v[i],v[i+1]);
            pre+=v[i]-v[i+1];
        }
    }
    for(auto x:v) cout << x << " ";
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}