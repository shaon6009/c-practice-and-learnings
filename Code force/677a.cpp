#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,x=0,y=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];
        if(arr[i]<=b){
            x++;
        }
        else{
            y+=2;
        }
    }
    cout<<x+y<<endl;

}
