#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), '{'), s.end());
    s.erase(remove(s.begin(), s.end(), '}'), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    set<char> value;
    for(int i = 0; i < s.length(); i++){
        value.insert(s[i]);
    }
    cout << value.size();
}