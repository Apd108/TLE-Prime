#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //linear search O(n) --> wokrs even without sorting space- O(1)

    //Binary Search  -> works only when sorted
    int n; cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    int low=0;int high=9;
    int target; cin >> target;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(v[mid]==target){
            cout << mid+1 << '\n';
            break;
        }
        else if(v[mid]>target){
            high=mid-1;
        }
        else low=mid+1;
    }

    //implicit binary searching
    //implicit - range not defined , search space is not given , hv to figure it out ourself
    
    //largest x st x*x<100
    low=1;
    high=100;
    int ans=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(mid*mid<100){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout << ans << '\n';

    // min speed to travel 100km(target) within 2hrs
    low=1;
    high=100;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(2*mid>=target){
            high=mid-1;
            ans=mid;
        }
        else low=mid+1;
    }
    cout << ans << '\n';

    // -----------------------------
    //lower_bound --> First element greater than equal to target
    // -----------------------------
    int target1; cin >> target1;
    auto it=lower_bound(v.begin(),v.end(),target1);
    cout << *it << '\n';
    it=upper_bound(v.begin(),v.end(),target1);
    cout << *it << '\n';
    
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}