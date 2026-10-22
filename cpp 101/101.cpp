#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    // well basics = printing patterns for me huehue so here we goooo
    //right half pyramid
    int n=5;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << '*';
        }
        cout << '\n';
    }
    //flloyd triangle
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << num++ << " ";
        }
        cout << '\n';
    }

    //inverted right hald pyramid
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout << '*';
        }
        cout << '\n';
    }

    //left half pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(j<n-i) cout << " ";
            else cout << '*';
        }
        cout << '\n';
    }

    //Hollow Square
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=0 && i!=n-1 && j!=0 && j!=n-1) cout << " ";
            else cout << '*';
        }
        cout << '\n';
    }

    //Full Pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << '*';
        }
        cout << '\n';
    }

    //Hourglass
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout << " ";
        }
        for(int j=2*(n-i)-1;j>0;j--){
            cout << '*';
        }
        cout << '\n';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << '*';
        }
        cout << '\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}