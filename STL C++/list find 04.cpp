#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5]={2,4,6,8,9};

    list<float>mylist(arr,arr+5);
    list<float>::iterator it;

    it= find(mylist.begin(),mylist.end(),65);
    cout<<*it<<endl<<endl;



     mylist.insert(it,7);


    for(it=mylist.begin(); it != mylist.end(); it++){
        cout<<*it<<endl;
    }

}

