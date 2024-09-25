// Ques 1: You are given a image in n*m matrix now you have to rotate the image by 
// 90 degree. Input : n=3, m=3 , image[3][3]={[1, 2, 3],[4,5,6],[7,8,9]}. Output =7 4 1
// 8 5 2
// 9 6 3


#include <iostream>

using namespace std;

int main() {
    const int n = 3; 
    const int m = 3; 
    int matrix[n][m] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    
    int rotated[m][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    
    cout << "Rotated matrix by 90 degrees clockwise:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Ques 2: Write a C++ program that take 2D array from user and then sort this array. 
// Input n=3, m=3 array=7 4 1
// 8 5 2
// 9 6 3

// output :- 1 2 3
// 4 5 6
// 7 8 9


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int n = 3; 
    const int m = 3; 
    int array[n][m];

    
    cout << "Enter " << n * m << " elements for a " << n << "x" << m << " array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    
    int flatArray[n * m];
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            flatArray[index++] = array[i][j];
        }
    }

    
    sort(flatArray, flatArray + (n * m));

    
    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = flatArray[index++];
        }
    }

    
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
