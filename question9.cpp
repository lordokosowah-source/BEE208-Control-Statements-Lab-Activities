START

INPUT current

WHILE current <= 10
    DISPLAY current
    INPUT current
END WHILE

DISPLAY "Overcurrent detected. Monitoring stopped."

STOP


Start
 |
Input current
 |
current<=10?
 /      \
Yes      No
 |        |
Display  Overcurrent
Input Current
 |
Repeat


#include <iostream>
using namespace std;

int main()
{
    double current;

    cout << "Enter current reading (A): ";
    cin >> current;

    while(current <= 10)
    {
        cout << "Safe Current Reading = "
             << current << " A" << endl;

        cout << "Enter current reading (A): ";
        cin >> current;
    }

    cout << "Overcurrent detected. Monitoring stopped.";

    return 0;
}