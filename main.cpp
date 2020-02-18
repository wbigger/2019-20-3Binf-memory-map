#include <iostream>

using namespace std;

int main()
{
    int memory = 0;
    cout << "Immetti un valore da 0 a 255.";
    cin >> memory;

    int n_bit = 0;
    cout << "Quale bit vuoi sapere? ";
    cout << "Inserisci un valore da 0 a 7.";
    cin >> n_bit;

    cout << "il valore di memoria che hai inserito e' " << memory;
    cout << "\nil bit che vuoi sapere e' " << n_bit;

    int mask = 1 << n_bit;
    cout << "\nla maschera e' " << mask;

    int result = memory & mask;
    if (result > 0) {
        cout << "\nil bit e' accesso!!";
    } else {
        cout << "\nil bit e' spento!!";
    }


    return 0;
}