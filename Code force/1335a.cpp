#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a; i++)
    {
        cin>>arr[i];
        if(arr[i]==1 || arr[i]==2)
        {
            cout<< "0"<<endl;
        }
        else{
            cout<<(arr[i]-1)/2<<endl;
        }
    }
}
