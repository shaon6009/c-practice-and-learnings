#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,count=0;
    string s;
    cin>>a>>s;
    for(int i=0; i<a; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;



    return 0;
}
