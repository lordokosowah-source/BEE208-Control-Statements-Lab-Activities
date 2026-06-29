START

DISPLAY MENU
INPUT choice

SWITCH(choice)

CASE 1:
    DISPLAY "Resistor: Used to limit current"
    BREAK

CASE 2:
    DISPLAY "Capacitor: Stores electrical charge"
    BREAK

CASE 3:
    DISPLAY "Diode: Allows current in one direction"
    BREAK

CASE 4:
    DISPLAY "Transistor: Used for switching and amplification"
    BREAK

CASE 5:
    DISPLAY "LED: Emits light when current flows"
    BREAK

DEFAULT:
    DISPLAY "Invalid selection"

END SWITCH

STOP


#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "1. Resistor" << endl;
    cout << "2. Capacitor" << endl;
    cout << "3. Diode" << endl;
    cout << "4. Transistor" << endl;
    cout << "5. LED" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Resistor: Used to limit current in a circuit.";
            break;

        case 2:
            cout << "Capacitor: Stores electrical charge.";
            break;

        case 3:
            cout << "Diode: Allows current flow in one direction.";
            break;

        case 4:
            cout << "Transistor: Used for switching and amplification.";
            break;

        case 5:
            cout << "LED: Emits light when current flows.";
            break;

        default:
            cout << "Invalid selection.";
    }

    return 0;
}


