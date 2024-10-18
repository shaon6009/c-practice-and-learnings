#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    it=vec.begin();

    for(int i=0; i<=5;i++){
    vec.push_back(i);
    }


    for(int i=0; i<vec.size();i++){
    cout<<vec[i]<<endl<<endl;
    }
    for(it=vec.begin(); it != vec.end(); it++){
        cout<<*it<<endl;
    }
}
