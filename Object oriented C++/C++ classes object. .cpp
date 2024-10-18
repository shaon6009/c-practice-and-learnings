#include<bits/stdc++.h>
using namespace std;

class info{
public:
    string name;
    string id;
    char section;
};


int main()
{
   info student1;
   student1.name ="Shaon";
   student1.id= "1012";
   student1.section='B';

   info student2;
   student2.name ="Hasan";
   student2.id= "1112";
   student2.section='B';

   info student3;
   student3.name ="Rakibul";
   student3.id= "1111";
   student3.section='B';

   cout<<student1.name<<" "<<student1.id<<" "<<student1.section<<endl;
   cout<<student2.name<<" "<<student2.id<<" "<<student2.section<<endl;
   cout<<student3.name<<" "<<student3.id<<" "<<student3.section<<endl;

}
