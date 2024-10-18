#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        int d,f;
        cin>>d>>f;
        if(d>f){
            swap(d,f);
        }
        cout<<max(d*2,f)*max(d*2,f);
    }
}
