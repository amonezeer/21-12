#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : year(0), price(0.0) {}
Car::Car(const string& make, const string& model, int year, double price)
    : make(make), model(model), year(year), price(price) {}

string Car::getMake() const { return make; }
string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

void Car::setMake(const string& make) { this->make = make; }
void Car::setModel(const string& model) { this->model = model; }
void Car::setYear(int year) { this->year = year; }
void Car::setPrice(double price) { this->price = price; }

void Car::input() {
    cout << "������� ����� ����������: ";
    cin >> make;
    cout << "������� ������ ����������: ";
    cin >> model;
    cout << "������� ��� �������: ";
    cin >> year;
    cout << "������� ����: ";
    cin >> price;
}
void Car::display() const {
    cout << "�����: " << make << endl;
    cout << "������: " << model << endl;
    cout << "��� �������: " << year << endl;
    cout << "����: " << price << endl;
}
Car::~Car() {
    cout << "���������� ������� Car ������" << endl;
}
