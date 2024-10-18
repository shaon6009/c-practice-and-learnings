#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5]={2,4,6,8,9};

    list<float>mylist(arr,arr+5);
    list<float>::iterator it;

    if (mylist.empty()) cout<<"empty"<<endl<<endl;
    else cout<<"fill"<<endl<<endl;

    cout<<mylist.front()<<endl<<endl;
    cout<<mylist.back()<<endl<<endl;

    mylist.pop_front();
    mylist.pop_back();


    for(it=mylist.begin(); it != mylist.end(); it++){
        cout<<*it<<endl;
    }

}


