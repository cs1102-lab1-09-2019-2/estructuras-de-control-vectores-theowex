#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    vector<int> valores;
    int temp;
    while(1) {
        cin >> temp;
        if(temp != -1)
            valores.push_back(temp);
        else
            break;
    }
    return valores;
}

float promedio(vector<int> &lista) {
    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
    float suma = 0;
    for(int i = 0; i < lista.size(); i++){
        suma += lista[i];
    }
    return suma/lista.size();
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}
