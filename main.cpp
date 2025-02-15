#include <iostream>
#include <string>
using namespace std;

int main() {
    // Estructuras de control condicionales (IF - IF ELSE):
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

    // Estructuras de control Iterativas ( FOR - WHILE):
    // Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.
    cout << endl;
    int d;
    long long factorial = 1;
    cout << "Ingrese un numero para calcular su factorial";
    cout << endl;
    cout << "Escriba el numero: ";
    cout << endl;
    cin >> d;

    if (d < 0) {
        cout << "El numero negativo no existe en un factorial";
    } else {
        int i = 1;
        while (i <= d) {
            factorial *= i;
            i++;
        }
        cout << "El factorizado de " << d << " es " << factorial << endl;
    }
// Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for.
    cout << endl;
    int e;
    cout << "Ingrese un numero mayor a 10 y menor que 30";
    cout << endl;
    cin >> e;

    if (e <= 10 || e >= 30) {
        cout << "El numero " << e << " no esta entre 10 y 30, intente de nuevo";
    } else {
        cout << "Los numeros impares desde 1 a " << e << " son estos: ";
        cout << endl;

        for (int i = 1; i <= e; i += 2) {
            cout << i << " ";
            cout << endl;
}
    }
    //Escribir un programa que realice lo mismo que el ejercicio anterior, pero usando el bucle while.
    int f;
    cout << "Vuelva a ingresar un numero mayor a 10 y menor que 30";
    cout << endl;
    cin >> f;
    if (f <= 10 || f >= 30) {
        cout << "El numero " << f << " no esta entre 10 y 30, intente de nuevo";
    } else {
        cout << "Los numeros impares desde 1 a " << f << " son estos: ";
        cout << endl;
        int i = 1;
        while (i <= f) {
            cout << i << " ";
            i += 2;
            cout << endl;
        }
    }

    return 0;
}



