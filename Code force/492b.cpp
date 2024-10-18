#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,m=0;//total lamp post=a,total distance=b
    cin>>a>>b;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    for(int i=0; i<a-1; i++)
    {
        if(arr[i+1]-arr[i]>m)
        {
            m=arr[i+1]-arr[i];
        }
    }
    double x=arr[0];
    double y=(double)m/2;
    double z=max(x,y);
    double u=b-arr[a-1];
    z=max(z,u);
    cout<<fixed<<setprecision(10)<<z<<endl;
}
