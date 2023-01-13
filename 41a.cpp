#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string t;
	int c = 0;
	cin >> s >> t;
	for(int i = t.length()-1; i <=0; i--){
		for(int j = 0; j < s.length(); j++){
			if(t[i] == s[j]){
				c++;
			}
		}
	}
	if(c == s.length()){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
