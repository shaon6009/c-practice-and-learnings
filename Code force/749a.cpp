#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%2==0){
        cout<<a/2<<endl;
        for(int i=0; i<a/2; i++){
            cout<< 2 <<" ";
        }
    }
    else{
        int j=a-3;
        cout<<(j/2)+1<<endl;
        for(int i=0; i<j/2; i++){
            cout<< 2 <<" ";
       }
    cout<< 3;
   }
}
