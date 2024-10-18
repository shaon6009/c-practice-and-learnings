#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a; cin>>a;
    ll b,c,d;
    while(a--){
        cin>>b>>c>>d;
        long long int ans=0;
        ans= d - d % b + c;
        if(ans>=d) cout<<ans<<endl;
        else cout<<(d - d % b - (b - c))<<endl;

    }
}
