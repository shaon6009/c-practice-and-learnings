#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>:: iterator it;
    m["Rakibul"]=22;
    m["Hasan"]=20;
    m["Shaon"]=30;

    cout<<m["Hasan"]<<endl<<endl;

    it=m.begin();
    it++;
    cout<<it->first<<endl<<endl;

    for(it=m.begin(); it !=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
