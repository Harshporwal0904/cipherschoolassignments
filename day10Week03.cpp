
/*Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the 
maximum value in an integer array. Test your function with various arrays in the main() function.*/


#include <bits/stdc++.h>
using namespace std;

int findMax(const int arr[], int size){
    int max = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }

    }

    return max;
}

int main(){
    int arr[] = {1, 5, 3, 9, 2};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << findMax(arr, size);
}

/*Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a 
given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). 
The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.*/

#include <iostream>
#include <cctype>  
using namespace std;


bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    
    while (left < right) {
        
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        
        
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        
        if (tolower(str[left]) != tolower(str[right])) {
            return false;  
        }

        
        left++;
        right--;
    }

    return true;  
}

int main() {
    
    string str1 = "A man, a plan, a canal, Panama";
    
    
    cout << (isPalindrome(str1) ? "Yes" : "No") << endl;
    

    return 0;
}
