
//Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

//Sample Input:- str1 = "Hello, World!"
//Output:- 13

 #include <bits/stdc++.h>
using namespace std;

int stringlength(const string &str){

    return str.length();
}

int main(){
    const string str =  "Hello, World!";
    int len = stringlength(str);

    cout << len;

    return 0;
} 




/*Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

Sample Input:- String ="Hello, World!"
character=’l’
Output:- 3*/

#include <bits/stdc++.h>
using namespace std;

int countCharacter(const string &str, char ch){
    int count = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ch){
            count++;
        }
    }

    return count;
}

int main(){
    const string str =  "Hello, World!";
    char ch = 'l';
    
    int result =  countCharacter(str, ch);
    cout << result;

    return 0;
}



/*Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

Sample Input : - str1 = "Hello, "
str2 = "World!"

Sample Output :- "Hello, World!"*/

#include <bits/stdc++.h>
using namespace std;

string concatenateStrings(const string &str1, const string &str2){

    return str1 + str2;
}

int main(){
    const string str1 = "Hello, ";
    const string str2 = "World!";

    cout << concatenateStrings(str1, str2);

}