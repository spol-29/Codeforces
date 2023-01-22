#include<bits/stdc++.h>
using namespace std;
int main(){
int a,count = 0;
	bool ans = false;
	cin >> a;
	vector<int> digits;
	while(ans == false){
		a++;
		int b = a;
		while(b != 0){
			b = b%10;
			digits.push_back(b);
			b/=10;
		}
		sort(digits.begin(),digits.end());
		for(int i = 0; i < digits.size(); i++){
			if(i == digits.size()-1){
				break;
			}else{
				if(digits[i] != digits[i]+1){
						count ++;
				}
				if(count == digits.size()-1){
					ans = true;
					break;
				}else{
					continue;
				}
			}
		}
	}
	cout << a << endl;

}