// Calculadora de Masa Corporal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    double Peso=0;
    double Altura = 0;
    double BMI = 0;
    string Resultado = "";
    string decisionPeso = "";
    string decisionAltura = "";
    
    //Solicitud de datos al usuario
    cout << "-----Bienvenido a la Calculadora de Peso Corporal-----\n";
    cout << "¿Desea ingresar su peso en libras o kilogramos?\n";
    cin >> decisionPeso;
    if (decisionPeso == "libras") {
        cout << "Ingrese su peso en libras\n";
        cin >> Peso;
    }
    else if (decisionPeso == "kilogramos" && decisionPeso == "kg") {
        cout << "Ingrese su peso en kilogramos\n";
        cin >> Peso;
    }

    cout << "¿Desea ingresar su altura en pulgadas o metros?\n";
    cin >> decisionAltura;
    if (decisionAltura == "pulgadas") {
        cout << "Ingrese su altura en pulgadas\n";
        cin >> Altura;
    }
    else if (decisionAltura == "metros" && decisionAltura == "m") {
        cout << "Ingrese su altura en metros\n";
        cin >> Altura;
    }

    //Calculo de peso
    
    BMI=
}

