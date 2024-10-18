#include<bits/stdc++.h>
using namespace std;

class vehicles
{
public:
    string brand="Ford";
    void sound()
    {
        cout<<"Vrummm Vrummm"<<endl;
    }
};

class car: public vehicles
{
public:
    string modle ="Mustang";
};

int main()
{
    car shaon;
    shaon.sound();
    cout<<shaon.brand<<" "<<shaon.modle<<endl;
}
