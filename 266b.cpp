#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,g,sw;
	string s;
	cin >> n >> t;
	for(int i = 1; i<= n; i++){
		cin >> g;
		s.push_back(g);
	}
	for(int j = 0; j < s.size(); j++){
		if(s[j] == 'G' && s[j-1]=='B'){
			s[j] = 'B';
			s[j-1] = 'G';
		}
	}
	cout << s;
}
