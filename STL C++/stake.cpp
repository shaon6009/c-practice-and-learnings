#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>s;
    s.push("Rakibul");
    s.push("Hasan");
    s.push("Shaon");

    cout<<s.top()<<endl<<endl;

    while(!s.empty()){
        string x;
        x=s.top();
        cout<<x<<endl;
        s.pop();
    }
}
