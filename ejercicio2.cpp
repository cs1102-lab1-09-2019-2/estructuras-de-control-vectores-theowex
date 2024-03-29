#include <iostream>
#include <vector>

using namespace std;

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

int moda(vector<int> &lista) {
    vector<int> nums;
    vector<int> cant;
    int mayor = -1, p, g;
    bool est;
    for(int i = 0; i < lista.size(); i++){
        est = false;
        for(int b = 0; b < nums.size(); b++){
            if(lista[i] == nums[b]) {
                est = true;
                break;
            }
        }
        if(est == true){
            for(p = 0; p < nums.size(); p++){
                if(nums[p] == lista[i]){
                    cant[p]++;
                    if(cant[p] > mayor){
                        mayor = cant[p];
                        g = p;
                    }
                    break;
                }
            }

        }
        else{
            nums.push_back(lista[i]);
            cant.push_back(1);
            if(1 > mayor){
                mayor = cant[i];
                g = p;
            }
        }

    }
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<' '<<cant[i]<<"\n";
    }
    return nums[g];
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();

    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}

/* //FORMA EXPLICACADA EN CLASE
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
​
float calcularPromedio(vector<int> &v);
float calcularModa(vector<int> &lista);
vector<int> leerConsola();
​
float calcularPromedio(vector<int> &v) {
    int suma = 0;
    for (int i = 0; i < v.size(); i++) {
        suma += v[i];
    }
    return (float)suma/v.size();
}
​
float calcularModa(vector<int> &lista) {
    unordered_map<int, int> map;
    for (int i = 0; i < lista.size(); i++) {
        map[lista[i]]++;
    }
    int moda, max = -10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
}
​
vector<int> leerConsola() {
    vector<int> lista;
    int num;
    while (true) {
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
        cin>>num;
        if (num<0) {
            break;
        }
        lista.push_back(num);
    }
    return lista;
}
​
​
int main() {
    cout<<"Calcular el promedio de numeros ingresados:\n";
    vector<int> leerUsuario = leerConsola();
    float promedio = calcularPromedio(leerUsuario);
    cout<<"El promedio es: "<<promedio<<"\n";
    int moda = calcularModa(leerUsuario);
    cout<<"La moda es : "<<moda<<"\n";
    return 0;
}
*/
