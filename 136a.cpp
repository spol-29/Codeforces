#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,curr,num;
	vector<int>g;
	cin >> n;
	vector<int>sorted[n];
	for(int i = 1; i <= n; i++){
		cin >> p;
		g.push_back(p);
	}
	for(int j = 0; j <= g.size()-1; j++){
		curr = g[j];
		num = g[curr];
		sorted[num] = g[j];
	}
	for(int m = 0; m <= sorted.size()-1; m++){
		cout << sorted[m];
	}

}
