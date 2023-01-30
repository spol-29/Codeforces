#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,ans = 0;
    cin >> a;
    for(int i = 1; i <= a; i++){
        if(i%2 != 0){
            ans += (i*-1);
        }else{
            ans += (i);
        }
    }
    cout << ans << endl;
}
