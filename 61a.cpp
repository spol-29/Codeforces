#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string a;
	cin >> s;
	cin >> a;
	for(int i = 0; i <= s.length()-1; i++){
		if(s[i] == a[i]) cout << 0;
		else cout << 1;
	}
}
