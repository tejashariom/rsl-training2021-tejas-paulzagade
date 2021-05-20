#include<iostream.h>
#include "Bike.c"

using namespace std;
void main()
{ 
   
    Vehicle vehicle;
    
    vehicle.setSpeed(50);
    vehicle.printDetails();

    Bike bike;
   
    bike.twoWheeler();
    bike.setSpeed(40);
    bike.setnumOfGear(4);
    bike.speedLimit();
    bike.printDetails();

    Car car;

    car.fourWheeler();
    car.setSpeed(70);
    car.setACcar(false);
    car.printDetails();

    Cycle cycle;
    
    cycle.setSpeed(3);
    cycle.setnoOfPaydal(2);
    cycle.printDetails();

}