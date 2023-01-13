#include <bits/stdc++.h>
using namespace std;
int main(){
	set <int> l;
	int n,x,y,f;
	cin >> n;
	cin >> x;
	for(int i = 1; i <= x; i++){
		cin >> f;
		l.insert(f);
	}
	cin >> y;
	for(int j = 1; j <= y; j++){
		cin >> f;
		l.insert(f);
	}
	if(l.size() == n){
		cout << "I become the guy.";
	}
	else{
		cout << "Oh, my keyboard!";
	}
}
