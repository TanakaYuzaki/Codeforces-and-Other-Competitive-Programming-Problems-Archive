#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    // Find largest and smallest
    double largest, smallest;
    
    // Find largest
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    
    // Find smallest
    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }
    
    // Print largest and smallest
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    
    // Print in ascending order
    cout << "Numbers in ascending order: ";
    
    if (a <= b && a <= c) {
        cout << a << " ";
        if (b <= c) {
            cout << b << " " << c;
        } else {
            cout << c << " " << b;
        }
    } else if (b <= a && b <= c) {
        cout << b << " ";
        if (a <= c) {
            cout << a << " " << c;
        } else {
            cout << c << " " << a;
        }
    } else {
        cout << c << " ";
        if (a <= b) {
            cout << a << " " << b;
        } else {
            cout << b << " " << a;
        }
    }
    cout << endl;
    
    return 0;
}