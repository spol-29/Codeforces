#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	set <int> c;
	for(int i = 1; i <= 4; i++){
		cin >> x;
		c.insert(x);
	}
	cout << 4-c.size();
}
