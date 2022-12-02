/*#define _WIN32_WINNT 0x0500 // Es necesaria esta definicion para esconder ventana de consola
#include <iostream>
#include <string.H>
#include <vector>
#include <windows.h> // Libreria que contiene las funciones de Winapi

#define ID1 100

/* Includes aqui para evitar confusiones eh?

#include "Persona.cpp"
#include "Cursos.cpp"
#include "Administrador.cpp"
#include "ListaCursos.cpp"
#include "Estudiante.cpp"


using namespace std;


/*  Declaracion del procedimiento de windows  

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);



/*  Declaramos una variable de tipo char para guardar el nombre de nuestra aplicacion  

char NombreClase[] = "Estilos";

HWND ventana1;           /* Manejador de la ventana

HWND boton1;             /* Creamos un boton 

MSG mensajecomunica;     /* Mensajes internos que se envian a la aplicacion 

WNDCLASSEX estilo1;      /* Nombre de la clase para los estilos de ventana 



int WINAPI WinMain (HINSTANCE hThisInstance,

                     HINSTANCE hPrevInstance,

                     LPSTR lpszArgument,

                     int nCmdShow)

{

    /* Creamos la estructura de la ventana indicando varias caracteristicas 

    estilo1.hInstance = hThisInstance;

    estilo1.lpszClassName = NombreClase;

    estilo1.lpfnWndProc = WindowProcedure;

    estilo1.style = CS_DBLCLKS;

    estilo1.cbSize = sizeof (WNDCLASSEX);

    estilo1.hIcon = LoadIcon (NULL, IDI_QUESTION);

    estilo1.hIconSm = LoadIcon (NULL, IDI_INFORMATION);

    estilo1.hCursor = LoadCursor (NULL, IDC_ARROW);

    estilo1.lpszMenuName = NULL;   /* Sin Menu 

    estilo1.cbClsExtra = 0;

    estilo1.cbWndExtra = 0;

    estilo1.hbrBackground = (HBRUSH) COLOR_WINDOW; /* Color del fondo de ventana */



    /* Registramos la clase de la ventana 

    if (!RegisterClassEx (&estilo1))

        return 0;



    /* Ahora creamos la ventana a partir de la clase anterior 

    ventana1 = CreateWindowEx (

           0,

           NombreClase,         /* Nombre de la clase 

           ("La tienda"),       /* Titulo de la ventana 

           WS_OVERLAPPEDWINDOW|WS_BORDER, /* Ventana por defecto 

           400,       /* Posicion de la ventana en el eje X (de izquierda a derecha) 

           70,       /* Posicion de la ventana, eje Y (arriba abajo) 

           644,                 /* Ancho de la ventana 

           575,                 /* Alto de la ventana 

           HWND_DESKTOP,

           NULL,                /* Sin menu 

           hThisInstance,

           NULL

           );



    /* Hacemos que la ventana sea visible 

    ShowWindow (ventana1, nCmdShow);

    ShowWindow(GetConsoleWindow(), SW_HIDE ); // Funcion para esconder la ventana de consola



    /* Hacemos que la ventan se ejecute hasta que se obtenga resturn 0 

    while (GetMessage (&mensajecomunica, NULL, 0, 0))

    {

        /* Traduce mensajes virtual-key 

        TranslateMessage(&mensajecomunica);

        /* Envia mensajes a WindowProcedure 

        DispatchMessage(&mensajecomunica);

    }



    return mensajecomunica.wParam;

}



LRESULT CALLBACK WindowProcedure (HWND ventana1, UINT mensajecomunica, WPARAM wParam, LPARAM lParam)

{

    switch (mensajecomunica) /* Manejamos los mensajes 

    {

        case WM_CLOSE: /* Que hacer en caso de recibir el mensaje WM_CLOSE

        DestroyWindow(ventana1); /* Destruir la ventana 

             break;

        case WM_DESTROY:

        PostQuitMessage(0);

            break;

        case WM_CREATE:

            boton1 = CreateWindowEx(0, "button", ("Texto"), WS_VISIBLE | WS_CHILD | 0x00000001, 10, 10, 80, 25, ventana1, (HMENU)ID1, GetModuleHandle(NULL), 0);

            break;

        case WM_COMMAND:

            if (LOWORD(wParam) == ID1){

            MessageBox(NULL, "Ingrese su ID y su contraseña.", "¡Alerta Codigazo!", MB_OKCANCEL | MB_DEFBUTTON2);

            }

            break;

        default:  /* Tratamiento por defecto para mensajes que no especificamos 

            return DefWindowProc (ventana1, mensajecomunica, wParam, lParam);

    }

return 0;

}

/*
int main(){
    // Para crear una persona (nombre, DNI, correo, direccion, telefono)
    Persona Manu = Persona("Manu","92322","jacintopichimawido25@gmail.com","idk","923121311");
    Manu.imprime();

    //Para crear un producto (nombre, marca, nSerie, precio, cantidad, categoria)
    Producto Laptop = Producto("Laptop","Lenovo","201",1200,10,"Tec");
    Laptop.imprime();

    Admin ManuAdmin = Admin("Manu","92322","jacintopichimawido25@gmail.com","idk","923121311", "29", "Manu");
    ManuAdmin.imprime();

    Cliente ManuCliente = Cliente("Manu","92322","jacintopichimawido25@mail.com","idk","923123131","29","Manu", 2000);

    //Para crear un vector vector <tipo> nombre;
    vector <Admin> VecAdmins;
    //Reserva 10 espacios (sino, al alcanzar su capacidad maxima se duplica)
    VecAdmins.reserve(10);
    //Me agrego como admin XD
    VecAdmins.push_back(ManuAdmin);
    
    //vector <Producto> VecProductos;
    // Reservasdo 100 espacios para el vector
    //VecProductos.reserve(100);
    //VecProductos.push_back(Laptop);
    ListaProductos LProductos = ListaProductos();
    //LProductos.agregar();
    //Aqui imprime la lista de productos que tenga la lista
    //LProductos.imprime();

    //LProductos.agregar();

    //LProductos.imprime();
    //Extrae elementos de un archivo txt
    LProductos.extraer();

    //LProductos.eliminar();
    LProductos.filtro();

    LProductos.imprime();

    //LProductos.modificar();

    ManuCliente.agregar(LProductos);

    ManuCliente.comprar();

    ManuCliente.imprime();
    
}*/