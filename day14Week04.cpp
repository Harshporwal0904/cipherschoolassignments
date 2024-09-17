/*Ques 1: Define a car class with properties brand name , model, engine, number of seats and 
method displayInfo that display the all information of class.*/

#include <bits/stdc++.h>
using namespace std;


class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    
    Car(string bName, string mdl, string eng, int seats) {
        brandName = bName;
        model = mdl;
        engine = eng;
        numberOfSeats = seats;
    }

    
    void displayInfo() {
        cout << "Car Information: " << endl;
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    
    Car car1("Toyota", "Camry", "V6", 5);

    
    car1.displayInfo();

    return 0;
}


//Ques 2: Write a program that defines a Rectangle class with a copy constructor

#include <bits/stdc++.h>
using namespace std;


class Rectangle {
public:
    int length;
    int width;

    
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy constructor called." << endl;
    }

    
    int area() {
        return length * width;
    }
};

int main(){
    
    Rectangle rect1(10, 5);

    
    Rectangle rect2 = rect1;

    
    cout << "Area of original rectangle: " << rect1.area() << endl;
    cout << "Area of copied rectangle: " << rect2.area() << endl;

    return 0;
}
