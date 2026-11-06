#include<bits/stdc++.h>
using namespace std;
#define int long long
void merge(vector<int>& v,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    //if any of the loops exhaust keeping backup loops now-->
    while(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(v[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}
void merge_sort(vector<int>& v,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    merge_sort(v,low,mid);
    merge_sort(v,mid+1,high);
    merge(v,low,mid,high);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v={5,2,8,1,3,7};
    merge_sort(v,0,v.size()-1);
    for(auto x:v) cout << x << " ";
}
