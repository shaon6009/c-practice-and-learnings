#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stu,np,ans,m=0;
    cin>>stu>>np;
    int arr[np];
    for(int i=0; i<np; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+np);
    m=arr[np-1]-arr[0];
    for(int i=stu; i<=np; i++)
    {
        ans=arr[i-1] - arr[i-stu];
        ans=abs(ans);
        m=min(m,ans);
    }

    cout<<m<<endl;
}
