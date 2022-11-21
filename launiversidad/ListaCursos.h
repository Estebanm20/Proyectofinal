#pragma once
#include <iostream>
#include <string>
#include "Cursos.h"
#include <vector>

using namespace std;

class ListaCursos{
    public:
    vector <Cursos> VecCursos;
    string nnombre;
    string nprofesor;
    string ncodigo;
    int creditos;
    int semestre;
    string carrera;
    Cursos nCursos;
    ListaCursos();

    void imprime();

    void agregar();

    void eliminar();

    void modificar();

    void filtro();

    void extraer();
    
    void agregaraBasedeDatos(string, string, string, string, float, int, int);
};