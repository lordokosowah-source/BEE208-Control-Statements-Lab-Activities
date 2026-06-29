START

totalResistance = 0

FOR i = 1 TO 5
    INPUT resistor
    totalResistance = totalResistance + resistor
END FOR

DISPLAY totalResistance

STOP


Start
  |
total = 0
  |
FOR i = 1 to 5
  |
Input resistor
  |
total = total + resistor
  |
Repeat Loop
  |
Display total
  |
Stop


#include <iostream>
using namespace std;

int main()
{
    double resistor, totalResistance = 0;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter resistor " << i << " (Ohms): ";
        cin >> resistor;

        totalResistance += resistor;
    }

    cout << "Total Resistance = "
         << totalResistance << " Ohms";

    return 0;
}