#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main(){
    struct{
        string name;
        string section;
        int roll;
        string department;

    }student1,student2,student3;

    student1.name="Rakibul";
    student1.section="B";
    student1.roll=1011;
    student1.department="SWE";

    student2.name="Hasan";
    student2.section="B";
    student2.roll=1012;
    student2.department="SWE";

    student3.name="Shaon";
    student3.section="B";
    student3.roll=1013;
    student3.department="SWE";

    cout<< "Name:" <<student1.name<< "\n"<< "Section:" << student1.section<< "\n"<<"Roll:"  <<student1.roll<< "\n"<< "department:" <<student1.department<< "\n\n";
    cout<< "Name:" <<student2.name<< "\n"<< "Section:" << student2.section<< "\n"<< "Roll:"  <<student2.roll<< "\n"<< "department:" <<student2.department<< "\n\n";
    cout<< "Name:" <<student3.name<< "\n"<< "Section:" << student3.section<< "\n"<< "Roll:"  <<student3.roll<< "\n"<< "department:" <<student3.department<< "\n";

    getch();
}
