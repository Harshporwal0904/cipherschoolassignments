/*Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that 
key exist inside the array or not if it exits print YES otherwise NO.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;

    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    
    int array[rows][cols];

    
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == key) {
                found = true;
                break; 
            }
        }
        if(found){
            break; 
    }

    
    if(found){
        cout << "YES" << endl;
    } 
    else{
        cout << "NO" << endl;
    }

    return 0;
}

/*Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of 
all values of the array.*?

#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;

    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }


    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }


    cout << sum;

}
