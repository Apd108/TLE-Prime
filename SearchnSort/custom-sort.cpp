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
#define sz(x) (ll)(x).size()
#define uniq(x) (x).erase(unique(all(x)), (x).end())
#define acc(x) accumulate(all(x), 0LL)
#define lb(x, v) (ll)(lower_bound(all(x), v) - (x).begin())
#define ub(x, v) (ll)(upper_bound(all(x), v) - (x).begin())
#define nl '\n'

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
ll ceil_div(ll a, ll b) { return (a + b - 1) / b; }

//-------------SYNTAX----------------
struct custom_sort
{
    bool operator()(pll a,pll b){
        //if true then a comes first else b 
        //we want to compare acc to inc order of second value of pair
        if(a.ss!=b.ss) return a.ss < b.ss;
        return a.ff<b.ff;
    }
};
//------------------------------------
void solve() {
    vector<pll>v={{2,5},{1,7},{2,3}};
    sort(all(v),custom_sort());
    for(auto p:v){
        cout << p.ff << " " << p.ss << nl;
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