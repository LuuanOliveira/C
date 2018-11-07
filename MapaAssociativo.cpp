#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<map>

using namespace std; 

int main(){

    map <int, string> pratos;

    pratos[101] = "Parmegiana de Frango";
    pratos[102] = "Parmegiana de Carne";
    pratos[103] = "Almondegas";
    pratos[104] = "Bisteca Suína";
    pratos[105] = "Bife Acebolado";
    pratos[106] = "Frando Grelhado";

    printf("Pratos do Dia:\n\n");

    cout << pratos[101] << endl;
    cout << pratos[102] << endl;
    cout << pratos[103] << endl;
    cout << pratos[104] << endl;
    cout << pratos[105] << endl;
    cout << pratos[106] << endl;

    return 0;
}