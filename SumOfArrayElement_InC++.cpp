
#include <iostream>
using namespace std;
//Take input-
void inputarray(int x[]){
    cout<<"Give Your Input"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter "<<i+1<<" Element: ";
       cin>>x[i];
    }
}
//Sum the Element - 
void sumarray(int y[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+y[i];
    }
    cout<<"Sum of Element is : "<<sum;
}

int main() {
    int arr[5];
  //Now call both above created function one by one in order - 
    inputarray(arr);
    sumarray(arr);
    return 0;
}
