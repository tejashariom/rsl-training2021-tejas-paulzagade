#include<iostream.h>

using namespace std;

class Vehicle 
{
protected:
         float speed;
         bool isVehicleOn;

public:
       Vehicle() 
       {
        speed = 00 ;
        isVehicleOn = true;
       }

      
       void setSpeed(float speed)
       {
        this->speed = speed;
       }
   
       void printDetails() 
       {
        cout<<"--------I am Vehicle--------"<<endl;
        cout<<"My speed is "<<speed<<"."<<endl;
        cout<<"I am "<<(isVehicleOn ? "ON" : "OFF")<<"."<<endl;
        cout<<"---------------------------"<<endl;
       }

};
