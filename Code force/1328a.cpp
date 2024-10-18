#include<iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int i=0; i<c; i++){
            long long int a,b;
            cin>>a>>b;

        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<(b-(a%b))<<endl;
        }
    }
}
