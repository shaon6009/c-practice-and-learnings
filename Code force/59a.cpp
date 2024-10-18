#include<iostream>
#include<string>

using namespace std;
int main()
{
    int lo=0,up=0,i;
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++){
        if(isupper(s[i])){
            up++;
        }else{
            lo++;
        }
    }
    if(up>lo){
        for(i=0; i<s.size(); i++){
            s[i]=towupper(s[i]);
        }
        cout<<s<<endl;
    }
    if(up<lo){
        for(i=0; i<s.size(); i++){
            s[i]=towlower(s[i]);
        }
        cout<<s<<endl;
    }
    if(up==lo){
        for(i=0; i<s.size(); i++){
            s[i]=towlower(s[i]);
        }
        cout<<s<<endl;
    }

    return 0;
}
