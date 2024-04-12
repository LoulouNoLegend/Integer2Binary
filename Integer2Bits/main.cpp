#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    char choice='N';

	do
	{
        system("cls");

        if (choice == 'Q')
            exit(0);

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

        cout << endl << "The binary equivalent is: " << endl;
        for (int j = i - 1; j >= 0; j--)
            cout << binaryNumber[j];

        cout << endl << endl << endl << "N: Convert an other number"
            << endl << "Q: Quit the app"
            << endl;

        choice = _getch();
        choice = toupper(choice);
	} while (choice=='N');
}