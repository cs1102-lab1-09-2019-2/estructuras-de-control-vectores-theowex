/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo
 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo
 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111
 Continuar? y
 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.
 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0

using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);

int sumar(int a, int b) {
    return a + b;
}
int restar(int a, int b) {
    return a - b;
}
int multiplicar(int a, int b) {
    return a * b;
}
float dividir(int a, int b) {
    return a / b;
}
int modulo(int a, int b) {
    return a % b;
}

void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Suma\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
}

int main() {
    int x, y, p;
    char c;
    mostrarMenu();
    do{
        cout<<"Ingresa una opcion: ";
        cin>>p;
        cout<<"Ingresa los dos numeros: ";
        cin>>x>>y;
        switch(p) {
            case 1:
                cout<<sumar(x, y)<<"\n";
                break;
            case 2:
                cout<<restar(x, y)<<"\n";
                break;
            case 3:
                cout<<multiplicar(x, y)<<"\n";
                break;
            case 4:
                cout<<dividir(x, y)<<"\n";
                break;
            case 5:
                cout<<modulo(x, y)<<"\n";
                break;
            }
        cout<<"Continuar? ";
        cin>>c;
    }while(c == 'y');

}
