#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,curr=0,r,a,g=0;
	vector<int> c;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> r >> a;
		curr -= r;
		curr += a;
		c.push_back(curr);
	}
	for(int j = 0; j < c.size(); j++){
 		if(c[j] > g){
			g = c[j];
		}
	}
	cout << g;
}
