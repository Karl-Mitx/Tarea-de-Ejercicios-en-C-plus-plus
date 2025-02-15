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
        cout << "El numero " << a << " es el mayor de los dos numeros";
    } else {
        if (a < b) {
            cout << "El numero " << a << " es el menor de los dos numeros";
        }
        else {
            if (a == b) {
                cout << "Los dos numeros son iguales";
            }
        }
    }
    //  Escribir un programa que pida al usuario un número entero y determine si es par o impar.
    cout << endl;
    int c;
    cout << "Escriba un numero entero y se determinara si es par o impar";
    cout << endl;
    cout << "Escriba el numero: ";
    cin >> c; cout << endl;
    if (c % 2 == 0) {
        cout << "El numero " << c << " es par";
    }
    else {
        cout << "El numero " << c << " es impar";
    }






    return 0;
}



