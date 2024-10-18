#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
int main(){
    string name;
    cout << "Type your name:" ;
    getline(cin,name);
    //cin >> name;//This can't read space;
    cout << "My name is "<<name;

    getch();
}
