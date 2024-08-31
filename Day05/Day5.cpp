// Ques-01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

// Sample Input:
// Enter a number: 5

// Sample Output:
// Odd



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a no: ";
    cin >> n;
    
    if(n%2==0){
        cout << "even";
    }else{
        cout << "odd";
    }
    return 0;
}

// Ques-02 Write a C++ function that takes a string as input and reverses it.

// Sample Input:
// Enter a string: CipherSchools

// Sample Output:
// Reversed string: sloohcSrehpiC


#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cin >> name;
    string rev;
    for(int i=name.length()-1;i>=0;i--){
        rev+=name[i];
    }
    cout << rev;
    return 0;
}

// Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase.

// Sample Input:
// Enter a string: cipherschools

// Sample Output:
// Number of vowels: 4
// Number of consonants: 9

#include <iostream>
#include <string>
using namespace std;


int main() {
    string name;
    cin >> name;
    int vcount=0;
    int ccount=0;

    for(char c:name){
        if(c=='a'|| c=='e' || c=='i' || c=='o' ||c=='u'){
            vcount++;
        }
        else{
            ccount++;
        }
    }

    cout << "Number of vowels: " <<vcount << endl;
    cout << "Number of consonants: "<< ccount;
    
    return 0;
}