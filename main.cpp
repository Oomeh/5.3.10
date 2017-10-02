/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on September 27, 2017, 2:24 PM
 */

#include <iostream> 
using namespace std;
class FarmAnimal{ 
public:
FarmAnimal(double water_consumption); 
double getWaterConsumption();
// ...
private:
    double water_consumption;
};

FarmAnimal::FarmAnimal(double water_consumption) { 
    this->water_consumption = water_consumption;
}

double FarmAnimal::getWaterConsumption() { 
    return water_consumption;
}

class DummyAnimal : public FarmAnimal{ 
public:
DummyAnimal(); 
};

DummyAnimal::DummyAnimal() : FarmAnimal(10.0) {
}

class Sheep : public FarmAnimal{ 
public:
Sheep(); 
};

Sheep::Sheep() : FarmAnimal(1.1) {
}

class Horse : public FarmAnimal{ 
public:
Horse(); 
};

Horse::Horse() : FarmAnimal(6.8) {
}

class Cow : public FarmAnimal{ 
public:
Cow(); 
};

Cow::Cow() : FarmAnimal(8.6) {
}



class DoublingAnimal : public FarmAnimal {
public:
DoublingAnimal(double given_water_consumption); 
};


DoublingAnimal::DoublingAnimal(double given_water_consumption) : FarmAnimal(2 * given_water_consumption) {
}

void printConsumption(FarmAnimal animal)
{
cout << "This animal consumes " << animal.getWaterConsumption() << " liters of water" << endl;
}

int main() {
    FarmAnimal animalA(5);
    DummyAnimal animalB;
    DoublingAnimal animalC(21);
    Sheep animalD;
    Horse animalE;
    Cow animalF;
    cout << "animalA consumes " << animalA.getWaterConsumption() << " liters of water." << endl;
    cout << "What about the others?" << endl; 
    
    printConsumption(animalB);
    printConsumption(animalC);
    printConsumption(animalD);
    printConsumption(animalE);
    printConsumption(animalF);
return 0; }