START

totalVoltage = 0

FOR i = 1 TO 10
    INPUT voltage
    totalVoltage = totalVoltage + voltage
END FOR

averageVoltage = totalVoltage / 10

DISPLAY averageVoltage

STOP


Start
  |
total = 0
  |
FOR i = 1 to 10
  |
Input voltage
  |
total = total + voltage
  |
Repeat Loop
  |
average = total / 10
  |
Display average
  |
Stop


#include <iostream>
using namespace std;

int main()
{
    double voltage, totalVoltage = 0, averageVoltage;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter voltage reading " << i << ": ";
        cin >> voltage;

        totalVoltage += voltage;
    }

    averageVoltage = totalVoltage / 10;

    cout << "Average Voltage = "
         << averageVoltage << " V";

    return 0;
}