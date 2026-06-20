#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    int price;
    int seats;
};
int main()
{
    Car c1;
    c1.name = "Honda City";
    c1.price = 100000;
    c1.seats = 6;

    cout << c1.name << " " << c1.price << " " << c1.seats;
}