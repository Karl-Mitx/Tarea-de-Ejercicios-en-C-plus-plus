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
    // Escribir un programa que pida al usuario dos números y determine cuál es el mayor de los dos.
    cout << endl;
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

    //Estructuras de control de selección (SWITCH):
    //Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.

    int g;
    cout << "Escribir un numero del 1 al 5 para saber el dia correspondiente en la semana";
    cout << endl;
    cout << "Escriba el numero del 1 al 5: ";
    cin >> g;
        switch (g) {
            case 1:
                cout << "Lunes";
            break;
            case 2:
                cout << "Martes";
            break;
            case 3:
                cout << "Miercoles";
            break;
            case 4:
                cout << "Jueves";
            break;
            case 5:
                cout << "Viernes";
            break;
            default:
                cout << "Ingrese un numero del 1 al 5";
            break;
        }
    cout << endl;


    //Escribir un programa en el cual el usuario pueda seleccionar cualquiera de los ejercicios anteriores para poder ejecutarlo.
    int opcion;
    cout << "Seleccione el ejercicio que usted desea ejecutar";
    cout << endl;
    cout << "1. Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.";
    cout << endl;
    cout << "2. Escriba dos numeros y se determinara cual es el mayor de los dos";
    cout << endl;
    cout << "3. Escriba un numero entero y se determinara si es par o impar";
    cout << endl;
    cout << "4. Ingrese un numero para calcular su factorial";
    cout << endl;
    cout << "5. Ingrese un numero mayor a 10 y menor que 30 (For)";
    cout << endl;
    cout << "6. Vuelva a ingresar un numero mayor a 10 y menor que 30 (While)";
    cout << endl;
    cout << "7. Escribir un numero del 1 al 5 para saber el dia correspondiente en la semana";
    cout << endl;
    cout << "Seleccione una opcion del 1 al 7: ";
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.";

        cout << endl;
        cout << "Ingrese su edad: ";
        cin >> edad;
        if (edad > 18) {
            cout << "Usted es mayor de edad" << endl;
        } else {
            cout << "Usted es menor de edad" << endl;
        }
        break;
        case 2:
            // Escribir un programa que pida al usuario dos números y determine cuál es el mayor de los dos.

                cout << endl;

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
        break;
        case 3:
            //  Escribir un programa que pida al usuario un número entero y determine si es par o impar.
                cout << endl;

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
        break;
        case 4:
            // Estructuras de control Iterativas ( FOR - WHILE):
                // Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.
                    cout << endl;

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
        break;
        case 5:
            // Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for.
                cout << endl;

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
        break;
        case 6:
            //Escribir un programa que realice lo mismo que el ejercicio anterior, pero usando el bucle while.

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
        break;
        case 7:
            //Estructuras de control de selección (SWITCH):
                //Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.

        cout << "Escribir un numero del 1 al 5 para saber el dia correspondiente en la semana";
        cout << endl;
        cout << "Escriba el numero del 1 al 5: ";
        cin >> g;
        switch (g) {
            case 1:
                cout << "Lunes";
            break;
            case 2:
                cout << "Martes";
            break;
            case 3:
                cout << "Miercoles";
            break;
            case 4:
                cout << "Jueves";
            break;
            case 5:
                cout << "Viernes";
            break;
            default:
                cout << "Ingrese un numero del 1 al 5";
            break;
        }
        break;
    }


    return 0;
}



