#pragma once
#include <iostream>
#include <string.H>

using namespace std;

class Cursos
{
	public:
		string Nombre;
        string Profesor;
        string Codigo;
        int Creditos;
        int Semestre;
        string Carrera;

        Cursos();

        Cursos(string, string, string, int, int, string);

        void imprime();

        void setnombre(string);

        void setprofesor(string);

        void setcodigo(string);

        void setcreditos(int);

        void setsemestre(int);

        void setcarrera(string);
        
        void cursos_llevados();

        int getcreditos();

        string getcarrera();

};