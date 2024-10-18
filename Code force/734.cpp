#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int i,a=0,d=0;
    for(i=0; i<n; i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]='B'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(a<d){
        cout<<"Danik"<<endl;
    }
    else if(a=d){
        cout<<"Friendship"<<endl;
    }
}
