// Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of the array: 75


#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    cout << "Sum of the array: " << s;
    return 0;
}

// Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of odd numbers: 45
// Sum of even numbers: 30

#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cout << "Enter size of array :";
    cin >> n;
    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    cout << "Sum of odd number: " << oddSum << endl;
    cout << "Sum of even number: " << evenSum << endl;
    
    return 0;
}

// Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array elements: 5 10 15 20 25

// Sample Output:
// Number of odd numbers: 3
// Number of even numbers: 2

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array :";
    cin >> n;
    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int evenNum=0;
    int oddNum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenNum++;
        }else{
            oddNum++;
        }
    }

    cout << "Number of odd number: " << oddNum << endl;
    cout << "Number of even number: " << evenNum << endl;
    
    return 0;
}
