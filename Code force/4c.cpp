#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    string s;

    map<string,int>reg;
    for(int i=0; i<a; i++)
    {
        cin>>s;
        if(reg[s]==0)
        {
            reg[s]=1;
            cout<< "OK"<<endl;
        }
        else{
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
}
