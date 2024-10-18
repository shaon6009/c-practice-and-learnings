#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    vector<int>vec ;
    vector<int>::iterator it;


    for(int i=0; i<=5;i++){
    vec.push_back(i);
    }


    for(int i=0; i<vec.size();i++){
    cout<<vec[i]<<endl;
    }
    it=vec.begin();
    it++;
    cout<<*it<<endl;


}
