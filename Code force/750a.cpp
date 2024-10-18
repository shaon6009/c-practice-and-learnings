#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x=240;
    int n;
    cin>>n;
    int a ;
    cin>>a;
    int sum=0;
    int y=0;
    int count=0;

    sum = x-a;
    for(int i=1; i<=n; i++)
    {
        y += i*5;

        if(y>sum)
       {
           break;
       }
       count=count+1;
    }
    cout<<count<<endl;
}
