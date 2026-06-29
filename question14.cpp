START

sum = 0
count = 0

FOR i = 1 TO 10
    INPUT temp

    IF temp < 0 THEN
         CONTINUE
    ENDIF

    sum = sum + temp
    count = count + 1
NEXT i

average = sum/count

DISPLAY average

STOP


Start
  |
For Loop
  |
Input Temp
  |
Temp <0?
 / \
Yes No
 |   |
Continue
     Add to Sum
     Count++
       |
      Next
       |
Average
 |
Stop


#include <iostream>
using namespace std;

int main()
{
    double temp, sum = 0;
    int count = 0;

    for(int i=1; i<=10; i++)
    {
        cout << "Temperature " << i << ": ";
        cin >> temp;

        if(temp < 0)
            continue;

        sum += temp;
        count++;
    }

    if(count > 0)
        cout << "Average = " << sum/count << " C";
    else
        cout << "No valid readings";

    return 0;
}