#include <iostream>
using namespace std;

// If and if-else statement-

int main() {
    int age;
    
    cout << "Enter your age: " << endl;
    cin >> age; 
    if (age < 1) {
        cout << "You are not born yet!" << endl;
    } 
    else if (age < 18) {
        cout << "Not allowed to party." << endl;
    } 
    else if (age == 18) {
        cout << "You will get a kid party!" << endl;
    } 
    else { 
        cout << "You are eligible!" << endl;
    }

    return 0;
}

// Switch statement-
int main() {
    int age;
    
    cout << "Enter your age 18 or 21: ";
    cin >> age;

    switch (age) {
        case 18:
            cout << "You are 18" << endl;
            break; 
            
        case 21:
            cout << "You are 21" << endl;
            break;
            
        default: 
            cout << "No special case" << endl;
            break;
    }

    cout << "Done with switch case" << endl;
    return 0;
}
