#include<iostream.h>
#include Vehicle.c

using namespace std;

class Cycle :public Vehicle
  {

private:
	int noOfPaydal; 
public:
    Cycle()
    {
        speed =4.5f;
        isVehiclehOn = true;
        
    }
    

    void setnoOfPaydal(int payadal)
    {
     noOfPaydal=paydal;
    }

    
    
    void printDetails() 
    {
        cout<<"-----I am Bicycle-----"<<endl;
        cout<<"My Speed is"<< speed<<"."<<endl;
        cout<<"I am "<<(isVehicleOn?  "ON" : "OFF")<<"."<<endl;
        cout<<"I have"<<noOfPayadal<<"."<<endl;
        cout<<"---------------------------"<<endl;
    }
};
