#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin>>a;
    char b[105];

    while(a--){
            cin>>b;
            int len=strlen(b);

            cout<<b[0];
            for(int i=1; i<len; i+=2){
                cout<<b[i];
            }
            cout<<endl;
    }

}
