#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin>>i;
    string s="codeforces";
    while(i--){
        char a;
        cin>>a;
        bool found=false;
        for(char x : s){
            if(a == x){
                found=true;
                break;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
