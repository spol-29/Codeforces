#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    if((s*v1)+(t1*2)<(s*v2)+(t2*2)){
        cout << "First" << endl;
    }else if((s*v2)+(t2*2)<(s*v1)+(t1*2)){
        cout << "Second" << endl;
    }else{
        cout << "Friendship" << endl;
    }
}