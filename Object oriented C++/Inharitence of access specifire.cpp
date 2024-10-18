#include<bits/stdc++.h>
using namespace std;

class employe
{
protected:
    int salary;
};

class programmer : public employe
{
public:
    int bonus;
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};

int main()
{
    programmer myObj;
    myObj.setSalary(5000);
    myObj.bonus=1500;
    cout<<"salary"<<myObj.getSalary()<<endl;
    cout << "Bonus: " << myObj.bonus << endl;
    return 0;
}
