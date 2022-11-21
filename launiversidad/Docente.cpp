#include <string>
#include <iostream>
#include "Docente.h"
#include "ListaCursos.h"

using namespace std;

Docente::Docente(string nombre, string DNI, string correo, string direccion, string telefono, string _contraseña, string _ID, string _Curso):Persona(nombre,DNI,correo,direccion,telefono){
    contraseña = _contraseña;
    Curso = _Curso;
    ID = _ID;
}

void Docente::imprime(){
    cout << "Bienvenido " << nombre << endl;
    cout << "ID: " << ID << endl;
    cout << "Correo: " << correo << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Curso: " << endl;
    for (int i = 0; i < VecCompras.size(); i++){
        VecCompras.at(i).imprime();
    }
}

void Docente::agregar(ListaCursos &o){
    cout << "Cursos a enseñar: " << endl;
    cout << "Introduzca el indice " << endl;
    int r;
    cin >> r;
    for (int i = 0; i < o.VecCursos.size(); i++){
        if (i == r){
            if (o.VecCursos.at(i).Semestre != 0){
                Cursos nvCursos = o.VecCursos.at(i);
                VecCompras.push_back(nvCursos);
                cout << o.VecCursos.at(i).Nombre << " curso agregado con exito " << endl;
            }
            else{
                cout << "El curso no cuenta con suficientes estudiantes, pruebe con un horario diferente" << endl;
            }
        }
        
    }
}

void Docente::modificar_notas(ListaCursos &o){
    cout << "Esta seguro de querer agendar los siguientes cursos? " << endl;
    for (int i = 0; i < VecCompras.size(); i++){
        int re = 0;
        cout << VecCompras.at(i).Nombre << "Total de horas: " << VecCompras.at(i).getcreditos() << endl;
        re = re + VecCompras.at(i).getcreditos();
    cout << "Total de cursos por enseñar: " << re << "$ " << endl;
    cout << "Esta seguro de querer agendar? " << endl;
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
    }
}
}

/*string Docente::getID(){
    return ID;
}

string Docente::getcontraseña(){
    return contraseña;
}*/