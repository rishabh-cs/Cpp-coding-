// Break And Continue in C++ Language 

#include <iostream>
using namespace std;

//Break -

int main() {
    for(int i=0;i<10;i++){
        if(i==8){
            break;
        }
        cout<<i<<endl ;
    }

    return 0;
}

//continue-

int main() {
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }
        cout<<i<<endl ;
    }

    return 0;
}


//Break & Continue Both Together-

int main() {
    for(int i=0;i<10;i++){
        if(i==2){
            continue;
        }
        else if(i==8){
            break;
        }
        cout<<i<<endl;
    }

    return 0;
}
