/******************************************************************************

Autor: Itzel Avelino Galvan
Fecha: 03/04/2026
Descripcion: El codigo realiza el calculo de la edad de una persona para determinar si es mayor de edad o no

*******************************************************************************
#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad, lo siento." << endl;
    }
