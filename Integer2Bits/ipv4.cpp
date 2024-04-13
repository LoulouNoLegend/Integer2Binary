#include"functions.h"

using namespace std;

void ipv4() {
    char choice = 'N';
    do {
        system("cls");

        if (choice == 'Q')
            return;

        string ip;
        cout << "Enter an IPV4 address (exemple: 192.168.0.1): " << endl;
        cin >> ip;

        stringstream ss(ip);
        string byte;
        cout << endl << "Binary Equivalent: " << endl;
        while (getline(ss, byte, '.')) {
            cout << bitset<8>(stoi(byte));
            if (!ss.eof())
                cout << ".";
        }

        cout << endl << endl << endl << "N: Convert an other address"
            << endl << "Q: Return to the menu"
            << endl;

        choice = _getch();
        choice = toupper(choice);
    } while (choice == 'N');
}
