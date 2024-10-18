#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int b,c;
        cin>>b>>c;
        if(b==c)
            cout<<"0"<<"\n";
            else{
                if(abs(b-c)%10==0)
                    cout<<abs(b-c)/10<<"\n";
                    else{
                        cout<<abs(b-c)/10+1<<"\n";
                }
        }
    }
}
