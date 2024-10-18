#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;//my list will tel the address where the data should store
    list<int>::iterator it;

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    mylist.push_front(50);//vector and list function almost same,vector only have push back and list have push back and push front.

    mylist.reverse();

    for(it=mylist.begin(); it != mylist.end(); it++){
        cout<<*it<<endl;
    }
}
