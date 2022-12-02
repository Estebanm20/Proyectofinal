#pragma once
#include <string.H>
#include <iostream>
#include "Persona.h"

using namespace std;

class Administrador :public Persona{
	public:
		string contrasenia;
        string ID;

        Administrador(string, string, string, string, string, string, string);

        void imprime();

        void agregar();

        string getID();

        string getcontrasenia();

};
