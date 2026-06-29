START

DISPLAY MENU
INPUT choice

SWITCH(choice)

CASE 1:
    INPUT voltage,current
    power = voltage * current
    DISPLAY power
    BREAK

CASE 2:
    INPUT voltage,current
    resistance = voltage / current
    DISPLAY resistance
    BREAK

CASE 3:
    INPUT power,time
    energy = power * time
    DISPLAY energy
    BREAK

DEFAULT:
    DISPLAY "Invalid Selection"

END SWITCH

STOP


#include <iostream>
using namespace std;

int main()
{
    int choice;
    double voltage, current, power, resistance, time, energy;

    cout << "1. Calculate DC Power" << endl;
    cout << "2. Calculate Resistance" << endl;
    cout << "3. Calculate Energy Consumption" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter Voltage (V): ";
            cin >> voltage;
            cout << "Enter Current (A): ";
            cin >> current;

            power = voltage * current;

            cout << "Power = " << power << " W";
            break;

        case 2:
            cout << "Enter Voltage (V): ";
            cin >> voltage;
            cout << "Enter Current (A): ";
            cin >> current;

            resistance = voltage / current;

            cout << "Resistance = " << resistance << " Ohms";
            break;

        case 3:
            cout << "Enter Power (W): ";
            cin >> power;
            cout << "Enter Time (h): ";
            cin >> time;

            energy = power * time;

            cout << "Energy = " << energy << " Wh";
            break;

        default:
            cout << "Invalid Selection";
    }

    return 0;
}