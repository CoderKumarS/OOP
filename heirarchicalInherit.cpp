#include <iostream>
using namespace std;
class Vehicle
{
    int mileage;
    float price;

public:
    void getdata()
    {
        cout << "Enter the mileage and price: \n";
        cin >> mileage >> price;
    }
    void putdata()
    {
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};
class Car : public Vehicle
{
    int ownershipCost, warranty, seating;
    string fuel;

public:
    void getdata()
    {
        cout << "Enter the ownership Cost, warranty(in years), seating capacity and fuel type: \n";
        cin >> ownershipCost >> warranty >> seating >> fuel;
    }
    void putdata()
    {
        cout << "OwnershipCost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << endl;
        cout << "Seating: " << seating << endl;
        cout << "Fuel: " << fuel << endl;
    }
};
class Audi : public Car
{
    string modelType;

public:
    void getdata()
    {
        cout << "Enter the model type: ";
        cin >> modelType;
    }
    void putdata()
    {
        cout << "The model type: ";
        cout << modelType << endl;
    }
};
class Ford : public Car
{
    string modelType;

public:
    void getdata()
    {
        cout << "Enter the model type: ";
        cin >> modelType;
    }
    void putdata()
    {
        cout << "The model type: ";
        cout << modelType << endl;
    }
};
class Bike : public Vehicle
{
    int numOfCylinder, numOfGears;
    string CoolingType, wheelType;

public:
    void getdata()
    {
        cout << "Enter the numOfCylinder, numOfGears CoolingType and wheelType: \n";
        cin >> numOfCylinder >> numOfGears >> CoolingType >> wheelType;
    }
    void putdata()
    {
        cout << "Number of Cylinder: " << numOfCylinder << endl;
        cout << "Number of Gears: " << numOfGears << endl;
        cout << "Cooling Type: " << CoolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
    }
};
class TVS : public Bike
{
    string makeType;

public:
    void getdata()
    {
        cout << "Enter the make type: ";
        cin >> makeType;
    }
    void putdata()
    {
        cout << "The make type: ";
        cout << makeType << endl;
    }
};
class bajaj : public Bike
{
    string makeType;

public:
    void getdata()
    {
        cout << "Enter the make type: ";
        cin >> makeType;
    }
    void putdata()
    {
        cout << "The make type: ";
        cout << makeType << endl;
    }
};
int main()
{
    Ford F;
    F.getdata();
    F.Car::getdata();
    F.Vehicle::getdata();
    F.putdata();
    F.Car::putdata();
    F.Vehicle::putdata();
    return 0;
}