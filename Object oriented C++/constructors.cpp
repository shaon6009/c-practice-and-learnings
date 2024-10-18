#include<bits/stdc++.h>
using namespace std;

class data
{
public:
    string name;
    int id;
    char section;
    double cgpa;
    data(string x, int y, char z, double a);
};

data:: data(string x, int y, char z, double a){
    name = x;
    id = y;
    section = z;
    cgpa = a;
}

int main()
{
    data dataObj1("shaon", 1012, 'b', 3.72);
    data dataObj2("Hasan", 1013, 'b', 3.71);

    cout<<dataObj1.name<<" "<<dataObj1.id<<" "<<dataObj1.section<<" "<<dataObj1.cgpa<<endl;
    cout<<dataObj2.name<<" "<<dataObj2.id<<" "<<dataObj2.section<<" "<<dataObj2.cgpa<<endl;
}
