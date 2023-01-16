#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c=s.size(),n = s.size();
    int count = s.size(),add = 0;
    while(n--){
        c=s.size();
        while(c--){
            if(s[n] == s[c] && n != c){
                count--;
                add++;
            }else{
                continue;
            }
        }
    }
    int ans = count+(ceil(add/2));
    if(ans%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{ 
        cout << "IGNORE HIM!" << endl;
    }
}