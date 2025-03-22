#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int opc;
    string x;
    cout<<"digite la opción que desea utilizar: \n1. Ingresar un carro al parqueadero. \n2. Dar salida a un carro del parqueadero. \n3. Informar los ingresos totales del parqueadero.\n4. Consultar la cantidad de puestos disponibles.\n5. Avanzar el reloj del parqueadero.\n6. Cambiar la tarifa del parqueadero \n7. salir del programa.\n";
    cin>> opc;
    switch (opc)
    {
        case 1:
        x="Ingrese un carro al parqueadero ";
        break;
        case 2:
        x="Dar salida a un carro del parqueadero ";
        break;
        case 3:
        x=". Informar los ingresos totales del parqueadero. ";
        break;
        case 4:
        x="Consultar la cantidad de puestos disponibles ";
        break;
        case 5:
        x="Consultar el porcentaje de disponibilidad. ";
        break;
        case 6:
        x="Avanzar el reloj del parqueadero.";
        break;
        case 7:
        x="salir del programa.";
        break;
        default:
        cout<<"has elegido una opción invalida";
        
        
        break;
        
        
    }
    cout<<x;
    
}