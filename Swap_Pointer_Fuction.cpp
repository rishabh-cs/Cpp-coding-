//Call By Reference-
//Swapping Numbers Using Pointers And Functions.

#include <iostream>
using namespace std;

void swap(int *,int *);

int main()
{
int a,b;
cout<<"Enter Value of A: ";
cin>>a;
cout<<"Enter Value of B: ";
cin>>b;
swap(&a,&b);
cout<<"New Value of A: "<<a<<endl;
cout<<"New Value of B: "<<b<<endl;
  
}

void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
  cout<<"Your Given Values Are Swapped"<<endl;
}
