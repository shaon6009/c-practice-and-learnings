#include<bits/stdc++.h>
using namespace std;

class shaon
{
public:
    void myfunction(){
        cout<<"Some content in present class"<<endl;
    }
};

class Hasan : public shaon{
};

class Rakibul : public Hasan{
};

int main()
{
    Rakibul myObj;
    myObj.myfunction();
    return 0;
}
