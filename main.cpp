#include <iostream>
#include <stdlib.h> //Funciona new y delte
using namespace std;

//Prototipo de las funciones

void pedirNotas();
void Mostrar_notas();

int numCalif, *calif;

int main()
{
    pedirNotas();
    Mostrar_notas();

    delete[] calif;


    return 0;
}

void pedirNotas(){
    cout << "ingrese el numero de calficaciones: ";
    cin >> numCalif;

    calif = new int[numCalif]; //Crear el arreglo tipo dinamico

    for(int i=0;i < numCalif;i++){
        cout << "Ingrese una calificacion:";
        cin >> calif[i];

    }

}

void Mostrar_notas(){
    cout << "\n\nMostrando notas del Usuario:\n";
    for(int i=0;i<numCalif;i++){
        cout << calif[i]<<endl;
    }
}
