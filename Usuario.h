#include <iostream>
#include <string>
using namespace std;

class Usuario{
    public: 
    Usuario (string _Username, string _Pasword): Username{_Username} ,Pasword{_Pasword} {}
    //set
    void setname(string _Username){
        Username = _Username;
    }
    void setpasword(string _Pasword){
        Pasword = _Pasword;
    }
    //get
    string getname()const{
        return Username;
    }
    string getpasword()const{
        return Pasword;
    }

    private:
    string Username;
    string Pasword;
};