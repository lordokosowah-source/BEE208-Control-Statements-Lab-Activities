START

INPUT ratedCurrent
INPUT measuredCurrent

IF measuredCurrent > ratedCurrent THEN
    DISPLAY "Overload detected. Circuit breaker should trip."
ELSE
    DISPLAY "Current is within safe limit."
END IF

STOP


Start
  |
Input Rated Current
  |
Input Measured Current
  |
Measured > Rated?
 /           \
Yes           No
 |             |
Overload    Safe Limit
   \          /
      Stop


#include <iostream>
using namespace std;

int main()
{
    double ratedCurrent, measuredCurrent;

    cout << "Enter rated current (A): ";
    cin >> ratedCurrent;

    cout << "Enter measured current (A): ";
    cin >> measuredCurrent;

    if (measuredCurrent > ratedCurrent)
        cout << "Overload detected. Circuit breaker should trip." << endl;
    else
        cout << "Current is within safe limit." << endl;

    return 0;
}