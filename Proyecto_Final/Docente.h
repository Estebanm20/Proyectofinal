#pragma once
#include <string>
#include <iostream>
#include "Persona.h"
#include "Cursos.h"
#include "ListaCursos.h"
#include <vector>

using namespace std;

class Docente: public Persona, public ListaCursos{
    public:
        string contrasenia;
        string ID;
        string Curso; 
        vector <Cursos> VecCompras;
        Cursos nvCursos;

        Docente(string, string, string, string, string, string, string, string);

        void imprime();

        void agregar(ListaCursos &o);

        void eliminar();

        void modificar_notas(ListaCursos &o);

        string getID();

        string getcontrasenia();
};
