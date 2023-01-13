#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,m;
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		m=n%10;
		if(m != 0){
			n-=1;
		}
		if(m == 0){
			n/=10;
		}
	}
	cout << n;
}
