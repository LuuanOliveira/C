#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<map>

using namespace std; 

int main(){

    int i;

    map <int, string> pratos;

    pratos[1] = "Parmegiana de Frango";
    pratos[2] = "Parmegiana de Carne";
    pratos[3] = "Almondegas";
    pratos[4] = "Bisteca Suína";
    pratos[5] = "Bife Acebolado";
    pratos[6] = "Frando Grelhado";

    printf("Pratos do Dia:\n\n");

   for(i=1;i<=6;i++)
   {
       cout << pratos[i] << endl;
   }

    return 0;
}