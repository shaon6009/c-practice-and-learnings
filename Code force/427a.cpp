#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int police=0,crime=0;
    for(int i=0; i<a; i++)
    {
        int n;
        cin>>n;
        if(n>0)
        {
            police +=n;
        }else
        {
            if(police<1)
            {
                crime++;
            }else
            {
                police--;
            }
        }
    }
    cout<<crime<<endl;
}
