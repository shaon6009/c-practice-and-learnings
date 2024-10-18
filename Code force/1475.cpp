#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int b=n&(n-1);
        if(b==0){
            cout<< "No"<<endl;
        }else
        {
            cout<< "YES"<<endl;
        }
    }
}
