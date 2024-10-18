#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,total=0;
    cin>>a>>c;
    int n[a];
    for(int i=0; i<a; i++){
        cin>>n[i];
        if(n[i]+c<=5){
            total++;
        }
    }
    cout<<total/3<<endl;
}
