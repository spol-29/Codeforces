#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
    cin >> a >> b;
    long long c = 1,d = 1;
    for(int i = 1; i <= b; i++){
        d *= b;
        cout << d << endl;;
    }
    
    for(int i = a; i >= 1; --i){
        c *= a;
        cout << c << endl;
    }
    
}
