
#include<bits/stdc++.h>
using namespace std;
#define int long long
//bubble sorting which i m never gonna use after now
void bubble_sort(vector<int>& v,int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}

//selection sort
void selection_sort(vector<int>& v,int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            swap(v[i],v[min_index]);
        }
    }
}

//Insertion Sort
void insertion_sort(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int key=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}


// MOST IMPORTANT --> Merge Sorting
//PTO
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    // bubble_sort(v,n);
    // selection_sort(v,n);
    insertion_sort(v,n);
    for(auto x:v) cout << x;   
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}