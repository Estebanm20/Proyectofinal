#include <iostream>
#include <string>
#include "Usuario.h"
using namespace std;

int main(){
    Usuario Usuario1 {"Samuel","1234567"};
    cout << Usuario1.getname() << endl;

    return 0;
}