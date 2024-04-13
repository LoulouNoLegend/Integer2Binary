#include "functions.h"

using namespace std;
void decimals()
{
    char choice = 'N';

    do
    {
        system("cls");

        if (choice == 'Q')
            return;

        int integer = 0,
            binaryNumber[32],
            i = 0;

        cout << "Enter an integer: " << endl;
        cin >> integer;

        while (integer > 0) {
            binaryNumber[i] = integer % 2;
            integer = integer / 2;
            i++;
        }

        cout << endl << "Binary equivalent: " << endl;
        for (int j = i - 1; j >= 0; j--)
            cout << binaryNumber[j];

        cout << endl << endl << endl << "N: Convert an other number"
            << endl << "Q: Return to the menu"
            << endl;

        choice = _getch();
        choice = toupper(choice);
    } while (choice == 'N');
}