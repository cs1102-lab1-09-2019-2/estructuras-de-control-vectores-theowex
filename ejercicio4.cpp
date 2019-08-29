/*
Escribir un programa que imprima lo siguiente:
12*****
123****
1234***
12345**
123456*
1234567
*/

#include <iostream>

using std::cout;

int main() {
    int i, k;
    for(int j = 2; j <= 7; j++){
        for(i = 1; i <= j; i++)
            cout<<i;
        for(k = 0; k <= 7-i; k++)
            cout<<'*';
        cout<<"\n";
    }
    return 0;
}
