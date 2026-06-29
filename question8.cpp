START

safeCount = 0
unsafeCount = 0

FOR i = 1 TO 8
    INPUT current

    IF current <= 10 THEN
        safeCount++
    ELSE
        unsafeCount++
    ENDIF
END FOR

DISPLAY safeCount
DISPLAY unsafeCount

STOP


Start
 |
safe=0, unsafe=0
 |
FOR i=1 to 8
 |
Input current
 |
current<=10?
 /      \
Yes      No
 |        |
safe++  unsafe++
   \    /
 Repeat
 |
Display counts
 |
Stop


#include <iostream>
using namespace std;

int main()
{
    double current;
    int safeCount = 0, unsafeCount = 0;

    for(int i = 1; i <= 8; i++)
    {
        cout << "Enter current reading " << i << ": ";
        cin >> current;

        if(current <= 10)
            safeCount++;
        else
            unsafeCount++;
    }

    cout << "Safe Readings = "
         << safeCount << endl;

    cout << "Unsafe Readings = "
         << unsafeCount << endl;

    return 0;
}