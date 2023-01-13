#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=0,i=0;
	set <char> d;	
	string s;
	cin  >> n;
	while(i <= 9000){
		m=n;
		m++;
		s = m;
		for(int i = 0; i < s.length(); i++){
			d.insert(s[i]);
		}
		if(m > n){
			if(d.size() == s.length()-1){
				 cout << m;
				 break;
			}
		}
	}
	i++;
}
