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
    cout << "¿Desea ingresar su peso en libras o kilogramos? (L/kg)\n";
    cin>>decisionPeso;
    
    if (decisionPeso == "L") {
        cout << "Ingrese su peso en libras\n";
        cin>>Peso;
    }
    else if (decisionPeso == "kg") {
        cout << "Ingrese su peso en kilogramos\n";
        cin >> Peso;
    }

    cout << "¿Desea ingresar su altura en pulgadas o metros? (p/m)\n";
    cin >> decisionAltura;
    if (decisionAltura == "p") {
        cout << "Ingrese su altura en pulgadas\n";
        cin >> Altura;
    }
    else if (decisionAltura == "m") {
        cout << "Ingrese su altura en metros\n";
        cin >> Altura;
    }

    //Calculo de peso
    if (decisionPeso == "L" && decisionAltura == "p") {
        BMI = (Peso * 703) / (Altura * Altura);
    }
    else if (decisionPeso == "kg" && decisionAltura == "m") {
        BMI = Peso / (Altura * Altura);
    }
    
    //Salida

    if (BMI > 0 && BMI < 18.5) {
        cout << "El Instituto Nacional de Salud ha determinado que usted tiene bajo peso\n";
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "El Instituto Nacional de Salud ha determinado que usted tiene un peso normal\n";
    }
    else if (BMI >= 25 && BMI < 29.9) {
        cout << "El Instituto Nacional de Salud ha determinado que usted tiene sobre peso\n";
    }
    else if (BMI >= 30) {
        cout << "El Instituto Nacional de Salud ha determinado que usted tiene obesidad\n";
    }

}

