#include<iostream>
using namespace std;
int main(){

    int i,k,n,count=0;//n=total player,k=comparision score,n=
    cin>>n>>k;
    int a[n];//store data from n player
    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        if(a[i] >= a[k-1] && a[i]!=0){
            count+=1;
        }
    }
    cout << count;

    return 0;
}
