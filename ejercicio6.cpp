/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30

 */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int num;
  vector <int> lista;
  for(int i=0;i<3;i++){
    cin>>num;
    lista.push_back(num);
  }
  sort(lista.begin(), lista.end());
  cout<<lista[2];
}
