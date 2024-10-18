#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    string result="";
    int i;

    for(i=0; i<s.size(); i++){
            char latter = towlower(s[i]);
        if(latter== 'a' || latter== 'e' || latter== 'y' || latter== 'i' || latter== 'o' || latter== 'u' ){
            continue;
        }else{
            result+='.';
            result+=latter;
        }

    }
    cout<<result<<endl;

    return 0;
}
