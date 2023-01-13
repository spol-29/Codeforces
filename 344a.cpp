#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x,c=1;
	cin >> n;
	vector<int>v;
	for(int i = 1; i <= n; i++){
		cin >> x; 
		v.push_back(x);
	}
	for(int i = 0; i <= n-1; i++){
		if(v[i] == 10){
			if(v[i+1] == 1){
				c++;
			}
		}
		if(v[i] == 1){
			if(v[i+1] == 10){
				c++;
			}
		}
	}
	cout << c;
}
