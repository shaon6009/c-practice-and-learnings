#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;
    string s[7] ={"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int n=max(a,b);
    cout<<s[n]<<endl;
}
