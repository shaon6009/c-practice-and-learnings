#include<bits/stdc++.h>
using namespace std;

class employe
{
private:
    int salary;

public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main()
{
    employe myObj;
    myObj.setSalary(50000);
    cout<<myObj.getSalary()<<endl;
}
