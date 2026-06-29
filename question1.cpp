START
INPUT voltage

IF voltage < 0 THEN
    DISPLAY "Invalid voltage reading"
ELSE IF voltage <= 50 THEN
    DISPLAY "Low voltage"
ELSE IF voltage <= 240 THEN
    DISPLAY "Normal voltage"
ELSE IF voltage <= 415 THEN
    DISPLAY "High voltage"
ELSE
    DISPLAY "Dangerous voltage"
END IF

STOP

Start
  |
Input Voltage
  |
Voltage < 0?
 /      \
Yes      No
 |        |
Invalid   Voltage<=50?
            /    \
          Yes    No
           |      |
        Low     Voltage<=240?
                 /      \
               Yes      No
                |       |
             Normal   Voltage<=415?
                      /       \
                    Yes       No
                     |         |
                   High    Dangerous
                      \      /
                       Stop

#include <iostream>
using namespace std;

int main()
{
    double voltage;

    cout << "Enter voltage (V): ";
    cin >> voltage;

    if (voltage < 0)
        cout << "Invalid voltage reading" << endl;
    else if (voltage <= 50)
        cout << "Low voltage" << endl;
    else if (voltage <= 240)
        cout << "Normal voltage" << endl;
    else if (voltage <= 415)
        cout << "High voltage" << endl;
    else
        cout << "Dangerous voltage" << endl;

    return 0;
}