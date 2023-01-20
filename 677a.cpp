#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,f,total=0;
	cin >> n >> h;
	for(int i = 1; i <= n; i++){
		cin >> f;
		if(f > h){
			total+=2;
		}else if(f < h || f == h){
			total++;
		}
	}
	cout << total;
}
