
//basic structure 
#include <iostream>
using namespace std;

struct intro{
  int age;
};
int main()
{
   struct intro s1;
    int a;
    cout<<"Enter Your age ";
    cin>>a;
    s1.age=a;
    cout<<"Your Age is "<<s1.age<<endl;
    return 0;
    
}
