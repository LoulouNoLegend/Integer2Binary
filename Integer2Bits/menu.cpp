#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"functions.h"

using namespace std;
void menu()
{
    int operation;

    do
    {
        system("cls");
        cout << R"(Choose what to convert into binary
1. Decimals
2. IPV4
3. IPV6

9. Exit

Number: )";

        operation = _getche();

        switch (operation)
        {
        case '1':
            decimals();
            break;

        case '2':
            ipv4();
            break;

        case '3':
            ipv6();
            break;

        case '9':
            cout << endl;
            exit(0);
            break;

        default:
            system("cls");
            break;
        }
    } while (true);
}