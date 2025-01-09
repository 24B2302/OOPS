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
        
        void get_info(){
            cout<<"Name: "<<make<<", model : "<<model;
            cout<<", price : "<<price<<endl;
        }
};

class ElectricCar : public Car{
    public : 
float battery_range;

void set_battery_range(float capacity) {
            battery_range = capacity;
        }

        void get_info() {
            Car::get_info(); 
            cout << ", Battery Range: " << battery_range << endl;
        }

};

class SportsCar : public Car{
    public: 
float top_speed;
    
void topspeed(float top__speed) {
            top_speed = top__speed;
        }

        void get_info() {
            Car::get_info(); 
            cout << ", TOP SPEED: " << top_speed << endl;
        }
    
};

int main() {

    Car car1, car2, car3, car4;
    ElectricCar electriccar;

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
    
    electriccar.make= "Tesla";
    electriccar.model = "ferron";
    electriccar.set_price(1000000);
    electriccar.set_battery_range(15000);

    // Print details of all cars
    car1.get_info();
    car2.get_info();
    car3.get_info();
    car4.get_info();
    electriccar.get_info();
    return 0;
}