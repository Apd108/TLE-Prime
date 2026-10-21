#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int num=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			num+=i+1;
		}
		else num++;
		int x=num;
		for(int j=0;j<=i;j++){
			if(i%2==1){
				cout << num++ << " ";
			}
			else{
				cout << x-- << " ";
			}
		}
		if(i%2==1) num--;
		cout << '\n';
	}
}

// good question ( hackerearth)