// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, 
// such as firstName, lastName, and age. The class should:

// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().



#include <iostream>
#include <string>
#include <tuple>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    // Constructor to initialize member variables
    Person(const std::string& fName, const std::string& lName, int a)
        : firstName(fName), lastName(lName), age(a) {}

    // Method to get the full name
    std::string getFullName() const {
        return firstName + " " + lastName;
    }

    // Method to get details as a tuple
    std::tuple<std::string, std::string, int> getDetails() const {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
   
    Person person("John", "Doe", 30);

    std::cout << "Full Name: " << person.getFullName() << std::endl;

    auto [fName, lName, personAge] = person.getDetails();

    std::cout << "First Name: " << fName << std::endl;
    std::cout << "Last Name: " << lName << std::endl;
    std::cout << "Age: " << personAge << std::endl;

    return 0;
}
