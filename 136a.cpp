#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a;
	b = a;
	vector<int> num;
	vector<int> ans;
	while(a--){
		int b;
		cin >> b;
		num.push_back(b);
	}
	a = b;
	for(int i = 0; i < num.size(); i++){
		ans[num[num[i-1]]-1]=num[i];
	}
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " " << endl;
	}
}
