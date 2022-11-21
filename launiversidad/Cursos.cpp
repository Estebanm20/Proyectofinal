#include "Cursos.h"


Cursos::Cursos(string _nombre, string _profesor, string _codigo, int _creditos, int _semestre, string _carrera){
    Nombre = _nombre;
    Profesor = _profesor;
    Codigo = _codigo;
    Creditos = _creditos;
    Semestre = _semestre;
    Carrera = _carrera;
}
void Cursos::imprime(){
    cout << "Nombre: " << Nombre << endl;
    cout << "Profesor: " << Profesor << endl;
    cout << "Codigo: " << Codigo << endl;
    cout << "Creditos: " << Creditos << endl;
    cout << "Semestre: " << Semestre << endl;
    cout << "Categoria: " << Carrera << endl;
}

void Cursos::setnombre(string nnombre){
    Nombre = nnombre;
}

void Cursos::setprofesor(string nprofesor){
    Profesor = nprofesor;
}

void Cursos::setcodigo(string ncodigo){
    Codigo = ncodigo;
}

void Cursos::setcreditos(int ncreditos){
    Creditos = ncreditos;
}

void Cursos::setsemestre(int nsemestre){
    Semestre = nsemestre;
}

void Cursos::setcarrera(string ncarrera){
    Carrera = ncarrera;
}

void Cursos::cursos_llevados(){
    Creditos--;
}

int Cursos::getcreditos(){
    return Creditos;
}

string Cursos::getcarrera(){
    return Carrera;
}