#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,i,coin,x,y;
    char str[100005];

    while (sf ("%d\n%s",&n,str) != EOF)
    {
        x = y = coin = 0;

        for (i=0; i<n-1; i++)
        {
            if (str[i] == 'U')
                ++y;
            else
                ++x;

            if (x == y && str[i] == str[i+1])
                ++coin;
        }

       cout << coin << endl;
    }
}