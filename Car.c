#include<iostream.h>
#include Vehicle.c

using namespace std;

class Car :public Vehicle
  {

private:
	bool ACcar=true; 
public:
    Car()
    {
        speed = 60.5f;
        isVehiclehOn = false;
        
    }
    
    void setACcar(bool ACcar)
    {
     this->ACcar=ACcar;
    }

    void fourWheeler() 
    {
        cout<<"Four Wheeler."<<endl;
    }
    
    
    void printDetails() 
    {
        cout<<"-----I am car-----"<<endl;
        cout<<"My Speed is"<< speed<<"."<<endl;
        cout<<"I am "<<(isVehicleOn?  "ON" : "OFF")<<"."<<endl;
        cout<<"I have"<<(Accar ? "AC" : "not AC")<<"."<<endl;
        cout<<"---------------------------"<<endl;
    }
};
