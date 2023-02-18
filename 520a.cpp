#include<bits/stdc++.h>
using namespace std;
void solve();

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[26] = {0};
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
        a[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(a[i] == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    void solve();
    return 0;

}


void solve(){
    int n,k;
    cin >> n>> k;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vector<int> xHold;
        xHold.push_back(x);
        if(xhold.size() == k){
            for(int j = 0; j < xHold; j++){
                cout << xHold[j] << " ";
            }
        }else if(xhold.size() > k){
            for(int j = 0; j < xHold; j++){
                cout << xHold[j] << " ";
            }
        }
    }
}
//path Coderforces/520B.cpp
//B. Two Buttons
