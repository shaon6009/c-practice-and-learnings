#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int p[n+1];
    p[0]=0;
    int x,y,z;
    for(int i=1; i<=n; i++)
    {
        x=INT_MIN,y=INT_MIN,z=INT_MIN;
        if(i>=a)
            x=p[i-a];
        if(i>=b)
            y=p[i-b];
        if(i>=c)
            z=p[i-c];
        p[i]=1+max(z,max(x,y));

    }
    cout<<p[n];
}
