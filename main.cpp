#include <iostream>
#include <string>
using namespace std;

int main() {
// Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.
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
    // Escribir un programa que pida al usuario dos números y determine cuál es el mayor de los dos.   cout << endl;
    int a;
    int b;
    cout << "Escriba dos numeros y se determinara cual es el mayor de los dos";
    cout << endl;
    cout << "Escriba el primer numero: ";
    cin >> a;
    cout << endl;
    cout << "Escriba el segundo numero: ";
    cin >> b;
    if (a > b) {
        cout << "El numero " << a << " es mayor de los dos numeros";
    } else {
        if (a < b) {
            cout << "El numero " << a << " es menor de los dos numeros";
        }
        else {
            if (a == b) {
                cout << "Los dos numeros son iguales";
            }
        }
    }


    return 0;
}



