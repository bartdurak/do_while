#include <iostream>
/* iteracje */
using namespace std;

int i=1;
int suma=0, zakres;
int main()
/*	PeTLA DO-WHILE -*/

{
    cout << "Podaj zakres: ";
    cin >> zakres;
    do
    {
        suma = suma + i;
        i++;
    }
    while(i<=zakres);
    cout << "Suma z petli DO-WHILE = " << suma << endl;

    return 0;
}