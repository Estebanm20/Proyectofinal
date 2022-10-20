#include <iostream>
#include <string>
using namespace std;

class Usuario{
    public: 
    Usuario (string _Username, string _Pasword, string _Apellido, string _Carrera): Username{_Username} ,Pasword{_Pasword}, Apellido{_Apellido}, Carrera{_Carrera} {}
    //set
    void setname(string _Username){
        Username = _Username;
    }
    void setpasword(string _Pasword){
        Pasword = _Pasword;
    }
    void setApellido(string _Apellido){
        Apellido = _Apellido;
    }
    void setCarrera(string _Carrera){
        Carrera = _Carrera;
    }
    //get
    string getname()const{
        return Username;
    }
    string getpasword()const{
        return Pasword;
    }
    string getApellido() const {
        return Apellido;
    }
    string getApelli() const {
        return Carrera;
    }

    private:
    string Username;
    string Pasword;
    string Apellido;
    string Carrera;
};