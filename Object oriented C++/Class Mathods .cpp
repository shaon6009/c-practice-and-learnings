#include<bits/stdc++.h>
using namespace std;

class shaon
{
public:
    void myName();
    int time(int koyta_baze);
};

void shaon::myName()
{
    cout<<"Rakibul Hasan Shaon"<<endl;
}

int shaon::time(int koyta_baze){
    return koyta_baze;
}

int main()
{
    shaon myObj;
    myObj.myName();
    cout<<"Ar baki ase 4 min " << myObj.time(3)<< " ta bajte." <<endl;
}
