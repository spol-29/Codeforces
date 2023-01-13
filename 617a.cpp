#include<bits/stdc++.h>
using namespace std;
int main(){
	int d,n;
	cin >> n;
	d = n/5;
	if(n%5>0){
		d++;
	}
	cout << d;
}
