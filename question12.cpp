START

DO
   DISPLAY MENU
   INPUT choice

   SWITCH(choice)
      CASE 1:
           INPUT voltage,current
           power = voltage * current
           DISPLAY power
           BREAK

      CASE 2:
           INPUT voltage,current
           resistance = voltage/current
           DISPLAY resistance
           BREAK

      CASE 3:
           INPUT power,time
           energy = power*time
           DISPLAY energy
           BREAK

      CASE 4:
           DISPLAY Exit
           BREAK

      DEFAULT:
           DISPLAY Invalid Choice
   END SWITCH

WHILE(choice != 4)

STOP
// Simple menu-driven program to calculate power, resistance, or energy
#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    double V = 0.0, I = 0.0, P = 0.0, R = 0.0, T = 0.0, E = 0.0;

    do
    {
        cout << "\n1. Calculate Power";
        cout << "\n2. Calculate Resistance";
        cout << "\n3. Calculate Energy";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        if(!(cin >> choice)) { // handle non-numeric input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input\n";
            continue;
        }

        switch(choice)
        {
            case 1:
                cout << "Voltage: ";
                cin >> V;
                cout << "Current: ";
                cin >> I;
                P = V * I;
                cout << "Power = " << P << " W\n";
                break;

            case 2:
                cout << "Voltage: ";
                cin >> V;
                cout << "Current: ";
                cin >> I;
                if(I == 0) cout << "Current cannot be zero\n";
                else {
                    R = V / I;
                    cout << "Resistance = " << R << " Ohms\n";
                }
                break;

            case 3:
                cout << "Power: ";
                cin >> P;
                cout << "Time: ";
                cin >> T;
                E = P * T;
                cout << "Energy = " << E << " J\n";
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}