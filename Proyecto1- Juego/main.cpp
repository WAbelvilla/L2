#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    
    int opcion = 0;

    while (true)
    {
        cout << "**************" << endl;
        cout << "MENU DE JUEGOS" << endl;
        cout << "**************" << endl;
        cout << endl;
        cout << endl;

        cout << " Seleccione un juego" << endl << endl;
        cout << " 1- StarShip" << endl;
        cout << endl;
        cout << " 2- Snake" << endl;
        cout << endl;

        cout << " Ingrese un numero del menu para seleccionar un juego: ";
        cin >> opcion;
        cout << endl;
        cout << endl;

        if (opcion == 0)
        {
            break;
        }
        
        switch (opcion)
        {
        case 1:
            starShip();
            break;
        case 2:
            snake();
            break;
        
        default:
            break;
        }
    }
    
    

    return 0;
}
