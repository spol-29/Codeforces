#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count = 0;
	vector<int> magnets;
	cin >> n;
	while(n--){
		int b;
		cin >> b;
		magnets.push_back(b);
	}
	for(int i = 0; i < magnets.size(); i++){
		if(i == magnets.size()-1){
			break;
		}else if(magnets[i] != magnets[i+1]){
			count++;
		}
	}
	cout << count+1 << endl;
}
