#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,c=0,l;
	cin >> l;
	while(l--){
		cin >> n >> t;
		while(n%t != 0){
			n++;
			c++;
		}
		cout << c << endl;
	}
	n=0; c=0;
}

