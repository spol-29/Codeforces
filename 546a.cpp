#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w;
    int sum = 0;
    cin >> k >> n >> w;
    for(int i = 2; i <= w; i++){
        sum += k * i;
    }	
    sum += k;
    if(sum > n){
        cout << sum - n << endl;
    }else{
        cout << 0 << endl;
    }
}
