#include "Cursos.h"
#include "ListaCursos.h"
#include <vector>
#include <cstdlib>
#include <fstream>

ListaCursos::ListaCursos(){
    vector <Cursos> VecCursos;
}

void ListaCursos::imprime(){
    cout << "Lista de Cursoss: " << endl;
    for (int i = 0; i < VecCursos.size();i++){
        VecCursos.at(i).imprime();
    }
}

void ListaCursos::agregar(){
    cout << "Que Cursos desea agregar? " << endl;
    cout << "Introduzcalo en el siguiente orden " << endl;
    cout << "Nombre, Docente, nªcodigo, Creditos, Semestre, Carrera" << endl;
    cout << "Nombre: " << endl;
    cin >> nnombre,
    cout << "Docente: " << endl;
    cin >> nprofesor;
    cout << "nºcodigo: " << endl;
    cin >> ncodigo;
    cout << "Creditos: " << endl;
    cin >> creditos;
    cout << "Semestre: " << endl;
    cin >> semestre;
    cout << "Carrera: " << endl;
    cin >> carrera;
    cout << "Cursos: " << nnombre << nprofesor << ncodigo << creditos << semestre << carrera << endl;
    cout << "Es esto correcto?" << endl;
    string r;
    cin >> r;
    if (r == "si"){
        /*
        string linea;
        string texto;
        // Lee el archivo de texto (Si es que no existe lo crea)
        ifstream archivo("Cursoss.txt");
        //Lee todo el archivo y lo almacena en la variable texto
        while (getline(archivo, linea)){
            texto=texto+linea+"\n";
        }
        archivo.close();
        
        //Agrega a texto los datos del nuevo Cursos y reescribe texto en el archivo
        ofstream archivo2("Cursoss.txt");
        archivo2 << texto << nnombre <<" "<< marca << " " << nSerie <<" "<< Precio << " " << Cantidad << " " << Categoria;

        archivo2.close();*/

        Cursos nCursos = Cursos(nnombre,nprofesor,ncodigo,creditos,semestre,carrera);
        VecCursos.push_back(nCursos);
    }
    cout << endl;
    
}

void ListaCursos::eliminar(){
    cout << "Que Cursos desea eliminar? " << endl;
    cout << "Introduzca el indice del objeto: " << endl;
    int r;
    cin >> r;
    for (int i = 0; i < VecCursos.size(); i++){
        if (i == r){
            VecCursos.erase(VecCursos.begin()+i);
        }
    }
    cout << endl;
}

void ListaCursos::modificar(){
    if (!(VecCursos.empty())){
        cout << "Que Cursos desea modificar? " << endl;
        cout << "Introduzca el indice del objeto " << endl;
        int r;
        string re;
        cin >> r;
        for (int i = 0; i < VecCursos.size(); i++){
            if (i == r){
                VecCursos.at(i).imprime();
                cout << "Que desea modificar del Cursos?" << endl;
                cout << "nombre, marca, nSerie, precio, cantidad, categoria, todo" << endl;
                cin >> re;
                if (re == "nombre"){
                    cout << "Introduzca el nuevo nombre: " << endl;
                    cin >> re;
                    VecCursos.at(i).setnombre(re);
                    VecCursos.at(i).imprime();
                }
                if (re == "Docente"){
                    cout << "Introduzca el nuevo docente: " << endl;
                    cin >> re;
                    VecCursos.at(i).setprofesor(re);
                    VecCursos.at(i).imprime();
                }
                if (re == "n°Codigo"){
                    cout << "Introduzca el nuevo nº de codigo" << endl;
                    cin >> re;
                    VecCursos.at(i).setcodigo(re);
                    VecCursos.at(i).imprime();
                }
                if (re == "Creditos"){
                    cout << "Introduzca los creditos del curso: " << endl;
                    cin >> re;
                    VecCursos.at(i).setcreditos(r);
                    VecCursos.at(i).imprime();
                }
                if (re == "Semestre"){
                    cout << "Introduzca el semestre: " << endl;
                    cin >> re;
                    VecCursos.at(i).setsemestre(r);
                    VecCursos.at(i).imprime();
                }
                if (re == "Carrera"){
                    cout << "Introduzca la nueva Carrera: " << endl;
                    cin >> re;
                    VecCursos.at(i).setcarrera(re);
                    VecCursos.at(i).imprime();
                }
                if (re == "todo"){
                    cout << "Introduzca el nuevo nombre: " << endl;
                    cin >> re;
                    VecCursos.at(i).setnombre(re);
                    cout << endl;
                    cout << "Introduzca el nuevo docente: " << endl;
                    cin >> re;
                    VecCursos.at(i).setprofesor(re);
                    cout << endl;
                    cout << "Introduzca el nuevo nº de codigo" << endl;
                    cin >> re;
                    VecCursos.at(i).setcodigo(re);
                    cout << endl;
                    cout << "Introduzca la nueva cantidad de creditos: " << endl;
                    cin >> r;
                    VecCursos.at(i).setcreditos(r);
                    cout << endl;
                    cout << "Introduzca el nuevo semestre: " << endl;
                    cin >> r;
                    VecCursos.at(i).setsemestre(r);
                    cout << endl;
                    cout << "Introduzca la nueva carrera: " << endl;
                    cin >> re;
                    VecCursos.at(i).setcarrera(re);
                    cout << endl;
                    VecCursos.at(i).imprime();
                }
            }
        }
    }
    else{
        cout << "La lista esta vacia" << endl;
    }
    
}

void ListaCursos::filtro(){
    cout << "Que carrera desea ver?" << endl;
    cout << "Intrduzca el tipo de carrera que quiera ver: \n Ciencias de la computación: CCOMP\n Derecho: Dere \n Arquitectura: Arqui" << endl;
    string r;
    cin >> r;
    for (int i = 0; i < VecCursos.size(); i++){
        if(r == VecCursos.at(i).getcarrera()){
            VecCursos.at(i).imprime();
        }
    }
}

void ListaCursos::extraer(){
    string linea;
    // Lee el archivo de texto (Si es que no existe lo crea)
    ifstream archivo("Cursos.txt");
    //Lee todo el archivo y lo almacena en la variable texto
    while (getline(archivo, linea)){
        while(archivo >> nnombre >> nprofesor >> ncodigo >> creditos >> semestre >> carrera){
            Cursos nCursos = Cursos(nnombre,nprofesor,ncodigo,creditos,semestre,carrera);
            VecCursos.push_back(nCursos);
        };
        }
    archivo.close();
}
