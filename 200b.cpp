#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,t=0;
	int x;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> x;
		t += x;
	}
	cout << setprecision(12) << t/n;
}
