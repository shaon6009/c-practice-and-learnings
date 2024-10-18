#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5]={2,4,6,8,9};

    list<float>mylist(arr,arr+5);
    list<float>::iterator it;

    it= find(mylist.begin(),mylist.end(),65);

    if(it == mylist.end()){
        cout<<"not found"<<endl<<endl;
    }
    else{
        cout<<"found"<<endl<<endl;
    }




}
