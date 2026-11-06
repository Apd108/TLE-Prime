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
    vector<pll> queries={{50,500},{500,1000},{50,1000}};
    set<ll>s;
    //---------------------------
    //Step 1 insertion of imp points
    //---------------------------
    for(auto q:queries){
        s.insert(q.ff);
        s.insert(q.ss+1);
    }

    //-----------------
    //Step-2 coordinate compression
    //-----------------
    map<ll,ll>mp;
    ll rank=0;
    for(auto x:s){
        mp[x]=rank;
        rank++;
    }

    //---------------------
    //Step-3 Difference Array on Rank Axis
    //---------------------
    int m=rank;
    vll diff(m+1,0);
    ll addValue=2; //Just an example
    for(auto q:queries){
        ll L=q.ff;
        ll R=q.ss;
        int l_rank=mp[L];
        int r_rank=mp[R+1];
        diff[l_rank]+=addValue;
        diff[r_rank]-=addValue;
    }

    //---------------------
    //Step-4 Prefix Sum
    //---------------------
    vll p(m,0);
    psum(diff,p);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}