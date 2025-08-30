#include <iostream>
using namespace std;

class Vehicle{
    private:
    string type;
    int maxSpeed;
    string fuelType;
    public:
    void accelerate(){
        cout<< "The "<< type << " is accelerating to " << maxSpeed << " km/h"<< endl;
    }
    string getType(){
        return type;
    }
    int getMaxSpeed(){
        return maxSpeed;
    }
    void setType(string t){
        type = t;
    }
    void setMaxSpeed(int s){
        maxSpeed = s;
    }
    string getFuelType(){
        return fuelType;
    }
    void setFuelType(string ft){
        fuelType = ft;
    }
    void displayInfo(){
        cout << "Type: " << type << ", Fuel Type: "<< fuelType << ", Max speed: " << maxSpeed << "." <<endl;
    }
};

int main(){
    Vehicle vehicle;
    vehicle.setType("Car");
    vehicle.setFuelType("Diesel");
    vehicle.setMaxSpeed(200);
    vehicle.displayInfo();
    vehicle.accelerate();
    vehicle.setType("Truck");
    vehicle.setFuelType("Gasoline");
    vehicle.setMaxSpeed(150);
    vehicle.displayInfo();
    vehicle.accelerate();
    vehicle.setType("Motorcycle");
    vehicle.setFuelType("Gasoline");
    vehicle.setMaxSpeed(180);
    vehicle.displayInfo();
    vehicle.accelerate();
}