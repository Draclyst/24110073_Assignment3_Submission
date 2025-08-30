#include <iostream>
using namespace std;

class Vehicle{ // Main class 
    private:
    string type; //attribute
    int maxSpeed; //attribute
    string fuelType; //attribute
    public:
    void accelerate(){ //method to accelerate
        cout<< "The "<< type << " is accelerating to " << maxSpeed << " km/h"<< endl;
    }
    string getType(){ //method to gettype from private
        return type;
    }
    int getMaxSpeed(){ //method to get max speed from private
        return maxSpeed;
    }
    void setType(string t){ //set type method
        type = t;
    }
    void setMaxSpeed(int s){ //set max speed method
        maxSpeed = s;
    }
    string getFuelType(){ //get fuel type method
        return fuelType;
    }
    void setFuelType(string ft){ //set fuel type (extension)
        fuelType = ft;
    }
    void displayInfo(){ //abstraction + displays vehicle info (extension)
        cout << "Type: " << type << ", Fuel Type: "<< fuelType << ", Max speed: " << maxSpeed << "." <<endl;
    }
};

int main(){
    for( int i =0;i < 3;i++){
        Vehicle vehicle;
        string type, fuelType;
        int maxSpeed;
        cout<< "Vehicle " << i+1 << " type:"; //vehicle input down here
        cin>>type;
        cout<<"Fuel type: ";
        cin>>fuelType;
        cout<<"Max speed: ";
        cin>>maxSpeed;
        vehicle.setType(type); 
        vehicle.setFuelType(fuelType);
        vehicle.setMaxSpeed(maxSpeed);
        vehicle.displayInfo();
        vehicle.accelerate();
    }
    return 0;
}