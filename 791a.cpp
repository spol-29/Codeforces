#include<iostream>
using namespace std;
int main(){
	int a,b,m=1;
	cin >> a >> b;
	while(b > a){
		a*=2;
		m++;
	}
	cout << m;
} 
