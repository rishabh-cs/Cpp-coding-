// Creating 3x3 Matric And taking input and giving output-


#include <iostream>
using namespace std;

// for input- 
void arrayinput(int x[3][3]){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cout<<"Enter Your Matrix Input Element" << "[" << i+1 << "][" <<j+1<< "]: ";
            cin>>x[i][j];
        }
}

//for output-
void arrayoutput(int y[3][3]){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cout<<"Element"<< "[" << i+1 << "]["<< j+1 << "] is: " << y[i][j]<<endl;
    cout<<endl;
}


int main() {
    int arr[3][3];
    
    arrayinput(arr);
    arrayoutput(arr);
    
    return 0;
}
