#pragma once
#include <string>
#include <iostream>

using namespace std;

class Persona{
	public:
		string nombre,DNI,correo,direccion,telefono;
		Persona(string, string, string, string, string);
		~Persona();
		virtual void imprime();	
};

/*class Persona{
	public:
    Persona(string , string , string , string , string);
    ~Persona() {};
    virtual void imprime() {
      cout<<"algo"<<endl;
    }
		string nombre;
		string DNI;
		string correo;
		string direccion;
		string telefono;*/
