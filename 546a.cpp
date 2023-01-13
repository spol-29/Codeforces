#include<iostream>
using namespace std;
int main(){
	int k,n,w;
	long long total = 0;
	cin >> k >> n >> w;
	for(int i = 1; i <= w; i++){
		total = total+(i*k);
	}
	if(n >= total){
		cout << 0;
	}else{
		cout << total - n;
	}
} 
