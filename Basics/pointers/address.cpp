#include <iostream>

int main() {
    int myVar = 42; // Declare an integer variable and initialize it
    int* myVarAddress = &myVar; // Use the address-of operator to get the address of myVar

    // Print the value of the variable
    std::cout << "Value of myVar: " << myVar << std::endl;

    // Print the address of the variable
    std::cout << "Address of myVar: " << myVarAddress << std::endl;

    return 0;
}
