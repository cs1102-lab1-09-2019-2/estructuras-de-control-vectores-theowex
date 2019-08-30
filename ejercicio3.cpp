#include <iostream>
#include <vector>

using namespace std;

int mediana(vector<int> &lista);
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

int mediana(vector<int> &lista) {
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2
    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    if(lista.size()%2 == 0)
        return (lista[lista.size()/2 - 1] + lista[lista.size() - lista.size()/2])/2;
    else
        return lista[lista.size()/2];
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
