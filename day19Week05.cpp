// Ques 1: Write a C++ program that take txt file input and write your details 
// inside that file through c++ and then print this details.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "details.txt";

    
    ofstream outFile(filename, ios::app); 
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

   
    string name = "John Doe";
    int age = 30;
    string email = "john.doe@example.com";

    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;
    outFile << "Email: " << email << endl;

    outFile.close();
    cout << "Details written to file successfully." << endl;

    
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "\nDetails from the file:\n";
    while (getline(inFile, line)) {
        cout << line << endl; 
    }

    inFile.close();
    return 0;
}


// Ques 1: Write a C++ program that take txt file input and write your details inside 
// that file through c++ and then print this details.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "sample.txt"; 

    
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of " << filename << ":\n";
    
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    
    inFile.close();
    return 0;
}
