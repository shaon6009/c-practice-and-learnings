#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    vector<int>vec (3, 0);//size of the vector is 3,and the value of the variable is 0.this code can't run because vector<int>vec already exist in line no 7.the output
    // will 0,0,0.vec will address the place where the data should store;
    vec.push_back(11);//the output will 0,0,11.
    for(int i=0; i<vec.size();i++){
    cout<<vec[i]<<endl<<endl<<endl;
    }

}

