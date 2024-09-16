#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int* dynamicInt = new int; 
    *dynamicInt = 10; 

    
    int size = 5; 
    int* dynamicArray = new int[size]; 

    
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i * 2; 
    }

    
    cout << "Dynamic Integer: " << *dynamicInt << std::endl;

    cout << "Dynamic Array: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " "; 
    }
    cout << endl;

    
    delete dynamicInt; 
    delete[] dynamicArray; 

    return 0;
}
