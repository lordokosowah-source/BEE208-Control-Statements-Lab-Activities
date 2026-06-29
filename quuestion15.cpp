START

total = 0

WHILE total <= 3000
     INPUT power
     total = total + power
ENDWHILE

DISPLAY "Load limit exceeded"
DISPLAY total

STOP


Start
  |
total=0
  |
Input Power
  |
total=total+power
  |
total<=3000?
 / \
Yes No
 |   |
Loop  Display Warning
      Display Total
           |
          Stop


#include <iostream>
using namespace std;

int main()
{
    double power, total = 0;

    while(total <= 3000)
    {
        cout << "Enter appliance power (W): ";
        cin >> power;

        total += power;
    }

    cout << "\nLoad limit exceeded.\n";
    cout << "Final Total Load = " << total << " W";

    return 0;
}