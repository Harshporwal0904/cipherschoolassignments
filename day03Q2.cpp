#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;
    for(int i = n; i > 0; --i){
        fact *= i;
    }

    cout << "The factorial of " << n << " is: " << fact;

    return 0;
}