#include "car.h"
#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");

    Car car1;
    cout << "Введите информацию о первом автомобиле:\n";
    car1.input();

    cout << "\nИнформация о первом автомобиле:\n";
    car1.display();

    Car car2("Volkswagen", "Passat", 2019, 869999.0);
    cout << "\nИнформация о втором автомобиле:\n";
    car2.display();

    return 0;
}
