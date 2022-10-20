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
void imprimirUsuario(int n, Usuario arrUsuario[]){
    arrUsuario[n].Display();
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
    Usuario Usuario1 {"Samuel","alianza123","Iman","Ingeneria Civil"};
    Usuario Usuario2 {"Hestevan","78esteban10","Medina","Contabilidad"};
    Usuario Usuario3 {"Qluinzman","celular123","Huillca","Arte"};
    Usuario Usuario4 {"Paolin","password","Mostajo","Psicologia"};
    cout << Usuario1.getname() << endl;

    Usuario arrUsuarios [4] = {Usuario1, Usuario2, Usuario3, Usuario4};
    /*imprimirUsuario(2, arrUsuarios);*/

    menu();
    return 0;
}