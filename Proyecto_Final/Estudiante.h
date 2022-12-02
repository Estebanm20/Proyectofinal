#pragma once
#include <string.H>
#include <iostream>
#include "Persona.h"
#include "Cursos.h"
#include "ListaCursos.h"
#include <vector>

using namespace std;

class Estudiante: public Persona, public ListaCursos{
    public:
        string contrasenia;
        string ID;
        int Creditos;
        float Promedio;
        int cursos;
        vector <Cursos> VecCompras;
        Cursos nvCurso;

        Estudiante(string, string, string, string, string, string, string,int,float,int);

        void imprime();

        void agregar(ListaCursos &o);

        void eliminar();

        void NumCursos();

        void matricular(ListaCursos &o);

        string getID();

        string getcontrasenia();
};
