#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int u=0,l=0;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(s[i] <= 90){
			u++;
		}
		if(s[i] >= 97){
			l++;
		}
	}
	if(u>l){
		for(int j=0; j <s.length();j++){
			if(s[j] <= 90){
				continue;
			}
			if(s[j] >= 97){
				s[j] -= 32;
			}
		}
	}
	if(l >= u){
		for(int j=0;j<s.length();j++){
			if(s[j] <= 90){
				s[j] += 32;
			}
			if(s[j] >= 97){
				continue;
			}
		}
	}
	cout << s;
}
