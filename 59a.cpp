#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
    int upper = 0, lower = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            upper++;
        }else{
            lower++;
        }
    }	
    if(upper > lower){
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 97 && s[i] <= 122){
                s[i] -= 32;
            }
        }
    }else if(lower > upper || lower == upper){
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                s[i] += 32;
           }
        }
    }
    cout << s << endl;
}