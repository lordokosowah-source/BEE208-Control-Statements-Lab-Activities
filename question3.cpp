START

INPUT GPA

IF GPA >= 3.5 THEN
    DISPLAY "Eligible for engineering scholarship"
ELSE
    DISPLAY "Not eligible for engineering scholarship"
END IF

STOP


Start
  |
Input GPA
  |
GPA >= 3.5?
 /       \
Yes       No
 |         |
Eligible  Not Eligible
    \      /
      Stop


#include <iostream>
using namespace std;

int main()
{
    double GPA;

    cout << "Enter GPA: ";
    cin >> GPA;

    if (GPA >= 3.5)
        cout << "Eligible for engineering scholarship" << endl;
    else
        cout << "Not eligible for engineering scholarship" << endl;

    return 0;
}


