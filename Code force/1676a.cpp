#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        int b=0,c=0;
        int arr[1000];
        for(int i=0; i<6; i++){
            cin>>arr[i];
            for(int i=0; i<3; i++){
            b=b+arr[i];
            }
            for(int i=3; i<6; i++){
            c=c+arr[i];
            }
            if(b==c) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
