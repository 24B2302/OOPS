#include <iostream>
#include <string>
using namespace std;

class Car {
    private: 
        float price;
    public :
        // attributes
        string make;
        string model;

       
        float apply_discount(float discount_percentage) {
            return price * (1 - discount_percentage / 100);
        }

        // SETTER FUNCTION
        void set_price(float p) {
            price = p;
        }

        // GETTER FUNCTION
        float get_price() {
            return price;
        }
};

int main() {

    Car car1, car2, car3, car4;

    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.set_price(1000000);

    
    car2.make = "Hyundai";
    car2.model = "Santro";
    car2.set_price(800000);


    car3.make = "Ford";
    car3.model = "Focus";
    car3.set_price(1200000);


    car4.make = "Honda";
    car4.model = "Civic";
    car4.set_price(1100000);

    // Print details of all cars
    cout << "Car 1: " << car1.make << " " << car1.model << ", Price: " << car1.get_price() << endl;
    cout << "Car 2: " << car2.make << " " << car2.model << ", Price: " << car2.get_price() << endl;
    cout << "Car 3: " << car3.make << " " << car3.model << ", Price: " << car3.get_price() << endl;
    cout << "Car 4: " << car4.make << " " << car4.model << ", Price: " << car4.get_price() << endl;



    return 0;
}
