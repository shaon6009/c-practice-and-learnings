#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,d=0,e=0;
    cin>>a;

    while(a--){
        int a,b; cin>>a>>b;
        if(a>b){
            c++;
        }
        else if(a==b){
            e++;
        }
        else{
            d++;
        }
    }
    if(c>d){
            cout<<"Mishka"<<endl;
        }else if(c==d){
            cout<<"Friendship is magic!^^"<<endl;
        }else{
            cout<<"Chris"<<endl;
        }
}
