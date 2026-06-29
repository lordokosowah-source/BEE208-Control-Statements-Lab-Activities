START

INPUT voltage

WHILE voltage >= 12
    INPUT voltage
END WHILE

DISPLAY "Battery voltage low. Recharge required."

STOP


Start
 |
Input Voltage
 |
Voltage>=12?
 /       \
Yes       No
 |         |
Input    Low Battery
Voltage
 |
Repeat


#include <iostream>
using namespace std;

int main()
{
    double voltage;

    cout << "Enter battery voltage (V): ";
    cin >> voltage;

    while(voltage >= 12)
    {
        cout << "Voltage Normal: "
             << voltage << " V" << endl;

        cout << "Enter battery voltage (V): ";
        cin >> voltage;
    }

    cout << "Battery voltage low. Recharge required.";

    return 0;
}