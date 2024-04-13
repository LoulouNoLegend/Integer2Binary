#include "functions.h"

using namespace std;

void ipv6() {
    char choice = 'N';
    do {
        system("cls");

        if (choice == 'Q')
            return;

        string ip;
        cout << "Enter an IPV6 address (exemple: 2001:0db8:85a3:0000:0000:8a2e:0370:7334): " << endl;
        cin >> ip;

        stringstream ss(ip);
        string group;
        cout << endl << "Equivalent binaire: " << endl;
        while (getline(ss, group, ':')) {
            cout << bitset<16>(stoi(group, nullptr, 16));
            if (!ss.eof())
                cout << ":";
        }

        cout << endl << endl << endl << "N: Convert an other address"
            << endl << "Q: Return to the menu"
            << endl;

        choice = _getch();
        choice = toupper(choice);
    } while (choice == 'N');
}
