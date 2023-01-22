#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	bool ans = true;
	cin >> a;
	while(a--){
		int a;
		cin >> a;
		if(a == 1){
			ans = false;
			cout << "Hard" << endl;
			break;
		}else{
			continue;
		}
	}
	if(ans == true){
		cout << "Easy" << endl;
	}
}