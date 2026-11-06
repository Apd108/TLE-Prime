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

ll merge(vll& v,ll low,ll mid,ll high){
      vll temp;
      ll left=low;
      ll right=mid+1;
      ll inv=0;
      while(left<=mid && right <=high){
          if(v[left]<=v[right]){
            temp.pb(v[left]);
            left++;
          }
          else{
            temp.pb(v[right]);
            inv+=mid-left+1;
            right++;
          }
      }
      while(left<=mid){
        temp.pb(v[left]);
        left++;
      }
      while(right<=high){
        temp.pb(v[right]);
        right++;
      }
      for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
      }
      return inv;
}
ll merge_sort(vll& v,ll low,ll high){
    if(low>=high) return 0;
    ll mid=(high+low)/2;
    ll inv=0;
    inv+=merge_sort(v,low,mid);
    inv+=merge_sort(v,mid+1,high);
    inv+=merge(v,low,mid,high);
    return inv;
}
ll invcount(vll& arr){
    return merge_sort(arr,0,sz(arr)-1);
}