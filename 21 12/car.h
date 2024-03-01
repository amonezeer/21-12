#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double price;

public:
    Car();
    Car(const string& make, const string& model, int year, double price);
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getPrice() const;
    void setMake(const string& make);
    void setModel(const string& model);
    void setYear(int year);
    void setPrice(double price);
    void input();
    void display() const;
    ~Car();
};

#endif 
