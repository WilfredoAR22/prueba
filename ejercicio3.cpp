#include <iostream>

#include <math.h>

using namespace std;

int main(){

    float x,y,resultado=0;

    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;

    resultado = pow(y,2);
    cout<<"el resultado es: "<<resultado;
    return 0;
}