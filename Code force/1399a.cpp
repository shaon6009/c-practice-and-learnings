#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,a;
    cin>>t;
    while(t--){
            cin>>a;
            int n[a];
            for(int i=0; i<a; i++){
                cin>>n[i];
            }
            sort(n,n+a);
            c=0;
            for(int i=1; i<a; i++){
                if(n[i]-n[i-1]>1){c=1; break;}
            }
            if(c==0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
    }
}
