#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={2,4,6,8,9};

    list<float>mylist(arr,arr+5);
    list<float>::iterator it;

    for(it=mylist.begin(); it != mylist.end(); it++){
        cout<<*it<<endl;
    }


}
