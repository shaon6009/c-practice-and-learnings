#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,cn=0,ma=1;
    cin>>a;
    int arr[a];

    for(int i=0; i<a; i++){
        cin>>arr[i];
        if(arr[i]>=arr[i-1]){
            cn++;
            ma=max(ma,cn);
        }
        else{
            cn=1;
        }
    }cout<<ma<<endl;

}
