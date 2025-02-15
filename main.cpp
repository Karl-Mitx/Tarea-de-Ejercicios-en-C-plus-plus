#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.";
    int edad;
    cout << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad > 18) {
        cout << "Usted es mayor de edad" << endl;
    } else {
            cout << "Usted es menor de edad" << endl;
    }
    return 0;
}



