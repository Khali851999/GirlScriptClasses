#include<iostream>
using namespace std;
class Car{
    public:
    int brakes = 4;
    int pedals = 3;
    int wheels = 4;
    int seats = 5;
    bool isDriving = false;
    long speed = 0;

    //default
    Car(){
        brakes = 0;
        pedals = 0;
        //.....
    }

    //paramentrized
    Car(int se, int br){
        seats = se;
        brakes = br;
    }

    Car(int se, int br, int sp){
        seats = se;
        brakes = br;
        speed = sp;
    }

    //copy constructor
    Car(Car& c){
        seats = c.seats;
        brakes = c.brakes;
    }

    ~Car(){
        
    }

    //function signature
    void accelerate(int multiplier);

    void slow(int breaking){
        speed = speed / breaking;
    }

    void stop(){

        isDriving = false;
        speed = 0;
    }

    void start(){
        isDriving = true;
        speed = 1;
    }

    bool isDrive(){
        return isDriving;
    }

    bool areTheCarsSame(Car x){
        if(wheels == x.wheels && speed == x.speed){
            return true;
        }
        return false;
    }

    private:
    protected:
};
//function defination
void Car::accelerate(int multiplier){

    speed = speed * multiplier;
}

int main(){

    /*
    
    OOP -> Object Oriented Programming
    Car -> brakes, pedals, wheels, seats, speed, acccelarate(), slow(), stop(), start(), isDriving
    
    */

   Car x;//default
   Car maruti(2, 5);//parametrized

   maruti.start();

   cout<<"is driving "<<maruti.isDrive()<<endl;

   maruti.accelerate(4);
   cout<<"speed is "<<maruti.speed<<endl;

   maruti.slow(2);
   cout<<"speed is "<<maruti.speed<<endl;


   Car suzuki(maruti);//copy
   cout<<"suzuki seats: "<<suzuki.seats<<endl;

   Car c = maruti;//copy
   c.areTheCarsSame(maruti);

   //invalid
   //c == maruti;


   //2
   //1. override
   //2. overload

}