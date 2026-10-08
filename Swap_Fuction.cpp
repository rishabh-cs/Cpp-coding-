
#include <iostream>
using namespace std;

int swap(int,int);

int main() {int a,b;
            cout<<"Enter A: ";
            cin>>a;
            cout<<"Enter B: ";
            cin>>b;
            swap(a,b);
    return 0;
}
int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"Your new A:"<<x<<endl;
    cout<<"Your new B: "<<y<<endl;
    return 0;
}
