

#include <string.H>
#include "Administrador.h"

using namespace std;

Administrador::Administrador(string nombre, string DNI, string correo, string direccion, string telefono, string _contrasenia, string _ID):Persona(nombre,DNI,correo,direccion,telefono){
    contrasenia = _contrasenia;
    ID = _ID;
}

void Administrador::imprime(){
    cout << "Administrador: " << nombre << endl;
    cout << "Correo electrónico: " << correo << endl;
    cout << "Telefono: " << telefono << endl;
}

string Administrador::getID(){
    return ID;
}

string Administrador::getcontrasenia(){
    return contrasenia;
}
