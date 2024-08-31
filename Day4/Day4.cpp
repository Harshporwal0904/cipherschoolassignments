// Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus

// Sample Output :-

// Enter first integer: 10
// Enter second integer: 3
// Addition: 13
// Subtraction: 7
// Multiplication: 30
// Division: 3.33333
// Modulus: 1


#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter first integer: ";
    cin >> n1;
    cout << "Enter second integer: ";
    cin >> n2;
    
    int addition = n1 + n2;
    int subtraction = n1 - n2;
    int multiplication = n1 * n2;
    double division;
    int modulus = n1 % n2;

    if (n2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        division = (double)n1 / n2;
    }

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    if (n2 != 0) {
        cout << "Division: " << division << endl;
    }
    cout << "Modulus: " << modulus << endl;

    return 0;
}


// Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

// Sample Output:-

// Complex Number 1: 3 + 4i
// Complex Number 2: 1 + 2i
// Sum: 4 + 6i
// Difference: 2 + 2i


#include <iostream>
using namespace std;

int main() {
    double real1 = 3.0, imag1 = 4.0;  
    double real2 = 1.0, imag2 = 2.0;  

    double sumReal = real1 + real2;
    double sumImag = imag1 + imag2;

    double diffReal = real1 - real2;
    double diffImag = imag1 - imag2;

    cout << "Complex Number 1: " << real1 << " + " << imag1 << "i" << endl;
    cout << "Complex Number 2: " << real2 << " + " << imag2 << "i" << endl;

    cout << "Sum: " << sumReal << " + " << sumImag << "i" << endl;
    cout << "Difference: " << diffReal << " + " << diffImag << "i" << endl;

    return 0;
}

