#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int sorted[n];
	int locMax, locMin;
	for(int i = 0; i < n; i++){
		int b;
		cin >> b;
		a[i] = b;
		sorted[i] = a[i];
	}
	sort(sorted, sorted+n);
	reverse(sorted, sorted+n);
	int max = sorted[0];
	int min = sorted[n-1];
	for(int i = 0; i < n; i++){
		if(a[i] == max){
			locMax = i;
		}
		if(a[i] == min){
			locMin = i;
		}
	}
	cout << (locMin + locMax)-1 << endl;
}