START
SET password = 1234
INPUT userPassword

IF userPassword == password THEN
    DISPLAY "Access Granted"
ELSE
    DISPLAY "Access Denied"
ENDIF

STOP


Start
  |
Input Password
  |
Password Correct?
 / \
Yes No
 |   |
Access Granted
     Access Denied
      |
     Stop


#include <iostream>
using namespace std;

int main()
{
    int password = 1234, userPassword;

    cout << "Enter Password: ";
    cin >> userPassword;

    if(userPassword == password)
        cout << "Access Granted";
    else
        cout << "Access Denied";

    return 0;
}