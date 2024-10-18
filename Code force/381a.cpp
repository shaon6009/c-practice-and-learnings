#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=3,c=3;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];

    }
    sort(arr,arr+a);

    for(int i=0; i<a; i+=2){
        b+=i;
    }
    for(int i=1; i<a; i+=2){
        c+=i;
    }
    cout<<b<<endl<<c<<endl;
}
