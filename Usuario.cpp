#include <iostream>
#include <string>
#include "Usuario.h"
using namespace std;



void elegir(int n){
    switch (n)
    {
    case 1:
        cout << "Administrador" << endl;

        break;
    case 2:
        cout << "Profesor" << endl;
        break;
    case 3:
        cout << "Alumno" << endl;
        break;
    default:
        cout << "=============================\n\tHasta Pronto\n=============================" << endl;
        break;
    }
}


void menu(){
    cout << "Bienvenidos a la UCSP" << endl;
    cout << "========================" << endl;
    cout << "Elija entre algunas de estas opciones: "<< endl;
    cout << "========================" << endl;
    cout << "[1] Administrador\n[2] Profesor\n[3] Alumno\n[0] Salir." << endl;
    int n;

    do {
        cin >> n;
        elegir(n);
    }
    while(n);

}

int main(){
    Usuario Usuario1 {"Montalvan","Samuel","Panadero nuclear","1234567"};
    cout << Usuario1.getname() << endl;
    menu();
    return 0;
}