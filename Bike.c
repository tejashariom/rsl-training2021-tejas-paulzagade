#include<iostream.h>
#include "Vehicle.c"

using namespace std;

class Bike: public Vehicle
  {

private:
	int numOfGear;
        int speedLimit=60;  
public:
    Bike()
    {
        speed = 55.5f;
        isVehiclehOn = false;
        
     }

    void setnumOfGear(int numOfGear) 
    {
        this->numOfGear = numOfGear;
    }

    void twoWheeler() 
    {
        cout<<"Two Wheeler."<<endl;
    }
    
    void setspeedLimit()
    {
      if(speed>60)
       {
         speedLimit=60;
       }
    } 
    
    void printDetails() 
    {
        cout<<"-----I am Bike-----"<<endl;
        cout<<"My Speed is "<<speed<<"."<<endl;
        cout<<"I am "<<(isVehicleOn ? "ON" : "OFF")<<"."<<endl;
        cout<<"I have "<<numOfGear<<"gears."<<endl;
        cout<<"My speed Limit is "<<speedLimit<<"."<<endl;
        cout<<"---------------------------"<<endl;
    }
};
