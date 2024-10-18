#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    float sum=0;
    float a;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
         a=sum/n;
    }
    cout<<a<<endl;

}
