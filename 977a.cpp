#include<bits/stdc++.h>
using namespace std;
int main(){
	int x = 5,y = 7;
    cin >> x >> y;
    while(y--){
        if(x % 10 != 0){
            x -= 1;
        }else if(x % 10 == 0){
            x /= 10;
        }
    }
    cout << x;
}