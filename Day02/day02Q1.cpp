#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    cout << "The largest number is: ";
    if(a > b && a > c){
        cout << a;
    }
    else if(b > c && b > a){
        cout << b;
    }
    else{
        cout << c;
    }

    return 0;
}