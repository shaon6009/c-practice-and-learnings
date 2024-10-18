#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>d;
    for(int i=0; i<d; i++){
        cin>>a>>b>>c;
        if(b+c==a || c+a==b || a+b==c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }



}
