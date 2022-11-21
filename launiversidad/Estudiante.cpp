#include <string>
#include <iostream>
#include "Estudiante.h"
#include "ListaCursos.h"

using namespace std;

Estudiante::Estudiante(string nombre, string DNI, string correo, string direccion, string telefono, string _contraseña, string _ID, int _Creditos,int _Promedio, int _Cursos):Persona(nombre,DNI,correo,direccion,telefono){
    contraseña = _contraseña;
    Creditos = _Creditos;
    ID = _ID;
}

void Estudiante::imprime(){
    cout << "Bienvenido " << nombre << endl;
    cout << "ID: " << ID << endl;
    cout << "Correo: " << correo << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Cursos matriculados: " << endl;
    for (int i = 0; i < VecCompras.size(); i++){
        VecCompras.at(i).imprime();
    }
}

void Estudiante::agregar(ListaCursos &o){
    cout << "Que curso desea agregar? " << endl;
    cout << "Introduzca el indice " << endl;
    int r;
    cin >> r;
    for (int i = 0; i < o.VecCursos.size(); i++){
        if (i == r){
            if (o.VecCursos.at(i).Semestre != 0){
                Cursos nCurso = o.VecCursos.at(i);
                VecCompras.push_back(nCurso);
                cout << o.VecCursos.at(i).Nombre << " curso agregado con exito " << endl;
            }
            else{
                cout << "El curso tiene cruce de horario, pruebe con uno diferente" << endl;
            }
        }
        
    }
}

void Estudiante::eliminar(){
    cout << "Que curso desea excluir? " << endl;
    cout << " Introduzca el indice " << endl;
    int r;
    cin >> r;
    for (int i = 0; i < VecCompras.size(); i++){
        if (i == r){
            VecCompras.erase(VecCompras.begin()+i);
            cout << "Curso excluido con exito" << endl;
        }
    }
}

void Estudiante::matricular(ListaCursos &o){
    cout << "Esta seguro de querer agregar los siguientes cursos? " << endl;
    for (int i = 0; i < VecCompras.size(); i++){
        int re = 0;
        cout << VecCompras.at(i).Nombre << "Total de creditos: " << VecCompras.at(i).getcreditos() << endl;
        re = re + VecCompras.at(i).getcreditos();
    cout << "Total de cursos: " << re << endl;
    cout << "Esta seguro de querer matricularte? " << endl;
    string r;
    cin >> r;
    if (r == "si"){
        for (int i = 0; i < VecCompras.size(); i++){
            for (int e = 0; e < o.VecCursos.size(); e++){
                if(VecCompras.at(i).Nombre == o.VecCursos.at(e).Nombre){
                    o.VecCursos.at(e).cursos_llevados();
                }
            }
        }
        if (Creditos < re){
            cout << "Error, no tiene creditos suficientes" << endl;
            }
        else{
            Creditos = Creditos - re;
            cout << "Matricula realizada con exito " << endl;
            VecCursos.clear();
        }
        }
    }
}

  void Estudiante::NumCursos(){
  
}

string Estudiante::getID(){
    return ID;
}

string Estudiante::getcontraseña(){
    return contraseña;
}