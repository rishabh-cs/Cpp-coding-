#include <iostream>
using namespace std;

int main() {
    int x[5];
    
    cout << "Give 5 input for x: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> x[i];
    }
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Your array is " << x[i] << "\n";
    }
    
    return 0;
}
