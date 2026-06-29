START 

FOR i = 1 TO 10
    INPUT voltage

    IF voltage < 10.5 THEN
         DISPLAY "Low battery detected"
         BREAK
    ELSE
         DISPLAY "Battery voltage normal"
    ENDIF
NEXT i

STOP

Start
  |
For Loop
  |
Input Voltage
  |
Voltage <10.5?
 / \
Yes No
 |   |
Display Warning
Break
     Display Normal
        |
      Next
        |
      Stop

#include <iostream>
using namespace std;

int main()
{
  double voltage;

  for (int i = 1; i <= 10; ++i)
  {
    cout << "Reading " << i << ": ";
    if (!(cin >> voltage))
    {
      cerr << "Invalid input.\n";
      return 1;
    }

    if (voltage < 10.5)
    {
      cout << "Low battery detected. Test stopped." << endl;
      break;
    }
    else
    {
      cout << "Battery voltage normal." << endl;
    }
  }

  return 0;
}