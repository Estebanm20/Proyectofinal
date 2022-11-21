
#include <iostream>
#include <string.H>
#include <vector>
#include <windows.h> // Libreria que contiene las funciones de Winapi

/* Includes aqui para evitar confusiones eh?*/

#include "Persona.h"
#include "Cursos.h"
#include "Docente.h"
#include "ListaCursos.h"
#include "Estudiante.h"
#include "Correo.h"

using namespace std;

void menu(){
    cout << "\t\tBienvenido a la U :D" << endl;
    cout << "Elija entre alguna de estas opciones" << endl;
    cout << "[1] Ingresar como Estudiante" << endl;
    cout << "[2] Ingresar como Docente" << endl;
    cout << "[3] Salir" << endl;
}

int main(){
    // Para crear una persona (nombre, DNI, correo, direccion, telefono)
    Persona Samuel = Persona("Samuel","92322","samuel@ucsp.edu.pe","Invasión 5 calamina 8","923121311");
    Samuel.imprime();

    //Para crear un curso (nombre, docente,codigo, creditos,semestre, carrera)
    Cursos Calculo_I = Cursos("Esteban","Adela","3123","4","3","CCOMP");
    Calculo_I.imprime();

    Docente SamuelDocente = Docente("Samue","92322","samuel@ucsp.edu.pe","Invasión 5 calamina 8","923121311", "29", "Samuel");
    SamuelDocente.imprime();

    Estudiante SamuelEstudiante = Estudiante("Samuel","92322","samuel@ucsp.edu.pe","Invasión 5 calamina 8","923123131","29","Samuel",200);

    //Para crear un vector vector <tipo> nombre;
    vector <Docente> VecDocentes;
    //Reserva 10 espacios (sino, al alcanzar su capacidad maxima se duplica)
    VecDocentes.reserve(10);
    //Me agrego como admin XD
    VecDocentes.push_back(SamuelDocente);

    vector <Estudiante> VecEstudiantes;
    //Reserva 10 espacios (sino, al alcanzar su capacidad maxima se duplica)
    VecEstudiantes.reserve(10);
    //Me agrego como admin XD
    VecEstudiantes.push_back(SamuelEstudiante);
    ListaCursos LCursos = ListaCursos();
    LCursos.extraer();

  
    int run = 1;
    int Adm = 0;
    int Clt = 0;

    string a;
    string b;

    string Nombre;
    string Curso;
    string Ccategoria;

    do{
        menu();
        int r;
        cin >> r;
        switch(r){
            case 3:
                run = 0;
                cout << "Gracias por visitar la U, nos vemos pronto! :D " << endl;
                break;
            case 2:
                cout << "Ingrese su ID y su contraseña: " << endl;
                cin >> a;
                cin >> b;
                for(int i = 0; i < VecDocentes.size(); i++){
                    if(a == VecDocentes.at(i).getID() && b == VecDocentes.at(i).getcontraseña()){
                        Adm = 1;
                        cout << "Bienvenido Docente " << VecDocentes.at(i).nombre << "!" << endl;
                        do{
                            cout << "Que le gustaria hacer?: " << endl;
                            cout << "Elija entre alguna de estas opciones" << endl;
                            cout << "[1] Ver la lista de cursos" << endl;
                            cout << "[2] Agregar cursos" << endl;
                            cout << "[3] Modificar cursos" << endl;
                            cout << "[4] Eliminar cursos" << endl;
                            cout << "[5] Agregar a la base de datos" << endl;
                            cout << "[6] Usar el filtro de cursos" << endl;
                            cout << "[7] Salir" << endl;
                            int r2;
                            cin >> r2;
                            switch(r2){
                                case 7:
                                    r = 0;
                                    Adm = 0;
                                    cout << "Ha salido de su cuenta" << endl;
                                    cout << endl;
                                    break;
                                case 1:
                                    LCursos.imprime();
                                    break;
                                case 2:
                                    LCursos.agregar();
                                    break;
                                case 3:
                                    LCursos.modificar();
                                    break;
                                case 4:
                                    LCursos.eliminar();
                                    break;
                                case 5:
                                    cout << "En mantenimiento" << endl;
                                    
                                    
                                    cout << "Que curso desea agregar? " << endl;
                                    cout << "Introduzcalo en el siguiente orden " << endl;
                                    cout << "Nombre, Curso" << endl;
                                    cout << "Nombre: " << endl;
                                    cin >> Nombre,
                                    cout << "Curso: " << endl;
                                    cin >> Curso;
                                    cout << "Curso: " << Nombre << Curso << endl;

                                    
                                    LCursos.agregaraBasedeDatos(Nombre,Curso);
                                    break;
                                    
                                case 6:
                                    LCursos.filtro();
                                    break;
                                    
                            }
                            r2 = 0;
                        }while(Adm);
                        break;
                    }
                }
                break;
                cout << r;
            case 1:
                cout << "Ingrese su ID y su contraseña: " << endl;
                cin >> a;
                cin >> b;
                for(int i = 0; i < VecEstudiantes.size(); i++){
                    if(a == VecEstudiantes.at(i).getID() && b == VecEstudiantes.at(i).getcontraseña()){
                        Clt = 1;
                        cout << "Bienvenido Estudiante " << VecEstudiantes.at(i).nombre << "!" << endl;
                        do{
                            cout << "Que le gustaria hacer?: " << endl;
                            cout << "Elija entre alguna de estas opciones" << endl;
                            cout << "[1] Ver la lista de cursos" << endl;
                            cout << "[2] Añadir al cursos" << endl;
                            cout << "[3] Eliminar curso" << endl;
                            cout << "[4] Usar un filtro de cursos" << endl;
                            //cout << "[7] Dejar un comentario" << endl;
                            cout << "[5] Salir" << endl;
                            int r2;
                            cin >> r2;
                            switch(r2){
                                case 6:
                                    Clt = 0;
                                    r2 = 0;
                                    cout << "Ha salido de su cuenta" << endl;
                                    cout << endl;
                                    break;
                                case 1:
                                    LCursos.imprime();
                                    break;
                                case 2:
                                    VecEstudiantes.at(i).agregar(LCursos);
                                    break;
                                case 3:
                                    VecEstudiantes.at(i).eliminar();
                                    break;
                                case 4:
                                    VecEstudiantes.at(i).matricular(LCursos);
                                    break;
                                case 5:
                                    LCursos.filtro();
                                    break;
                                case 7:
                                    cout << "Enviando Correo..." << endl;
                                    cout << "Registrado como " << VecEstudiantes.at(i).correo;
                                    Correo a = Correo(VecEstudiantes.at(i));
                                    a.imprime(VecEstudiantes.at(i));
                                    break;
                            }       
                        }while(Clt);
                        break;
                    }
                    else{
                        cout << "ID o contraseña incorrectos" << endl;
                    }
                }
        }
        if (r != 1 || r != 2 || r == 3){
            cout << "Error, intrdoujo un numero invalido" << endl;
        }
        r = 0;
    }while(run);
}