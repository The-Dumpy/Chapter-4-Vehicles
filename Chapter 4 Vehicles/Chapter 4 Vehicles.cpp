
#include <iostream>

using namespace std;
class Vehicle
{
protected:
    int m_year;
    int m_miles;
    string m_brand;

public:
    Vehicle(int year, int miles, string brand)
    {
        m_year = year;
        m_miles = miles;
        m_brand = brand;
    }
    void Display()
    {
        cout << "Brand: " << m_brand << endl;
        cout << "Year: " << m_year << endl;
        cout << "Miles: " << m_miles << endl;
    }

    virtual void Drive(int miles)
    {
        m_miles += miles;
    }
};
class Car : public Vehicle
{
public:
    Car(int year, int miles, string brand)
        : Vehicle(year, miles, brand)
    {
        
    }
    void Drive(int miles) override
    {
        m_miles += miles;
    }
};
class Boat : public Vehicle
{
public:
    Boat(int year, int miles, string brand)
        : Vehicle(year, miles, brand)
    {

    }
    void Drive(int miles) override
    {
        m_miles += miles;
    }
};
class Airplane : public Vehicle
{
public:
    Airplane(int year, int miles, string brand)
        : Vehicle(year, miles, brand)
    {

    }
    void Drive(int miles) override
    {
        m_miles += miles;
    }
};

int main()
{
    Car car1(2019, 56, "BMW");
    Boat boat1(2016, 5860, "Boot");
    Airplane airplane1(2018, 100000, "DaPlane");

    cout << "Car: " << endl;
    car1.Display();
    cout << "Boat: "<< endl;
    boat1.Display();
    cout << "Airplane: "<< endl;
    airplane1.Display();

    cout << "Drive method occurs" << endl;
    car1.Drive(82);
    boat1.Drive(296);
    airplane1.Drive(573);

    cout << "Car: " << endl;
    car1.Display();
    cout << "Boat: " << endl;
    boat1.Display();
    cout << "Airplane: " << endl;
    airplane1.Display();
}

