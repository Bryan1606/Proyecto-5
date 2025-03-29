#include <iostream>
using namespace std;
int main()
{
    cout<<"Bienvenidos a mi app \n";
    cout<<"Seleccione un opción: \n";
    int opcion;
    float horaentrada, horasalida, nuevahora, nuevatarifa;
    string placa;
    
    do
    {
    cout<<"\n1. Ingresar un carro al parqueadero. \n2. Dar salida a un carro del parqueadero.\n3. Informar los ingresos totales del parqueadero.\n4. Consultar la cantidad de puestos disponibles.\n5. Consultar el porcentaje de disponibilidad.\n6. Avanzar el reloj del parqueadero.\n7. Cambiar la tarifa del parqueadero.\n8. Salir\n";
    cin>>opcion;
        switch(opcion)
        {
            case 1:
            {
                cout<<"Ingresar placa: \n";
                cin>>placa;
                cout<<"Ingresar hora de entrada\n";
                cin>>horaentrada;
            }break;
            case 2:
            {
                cout<<"Ingresar placa: \n";
                cin>>placa;
                cout<<"Ingresar hora de salida\n";
                cin>>horasalida;
            }break;
            case 3:
            {
                cout<<"Mostrar total de dinero\n";
            }break;
            case 4:
            {
                cout<<"Mostrar cupos disponibles\n";
            }break;
            case 5:
            {
                cout<<"Mostrar porcentaje de cupos disponibles\n";
            }break;
            case 6:
            {
                cout<<"Ingresar nueva hora del parqueadero\n";
                cin>>nuevahora;
                cout<<"La nueva hora es "<<nuevahora<<"\n";
            }break;
            case 7:
            {
                cout<<"Ingresar nueva tarifa del parqueadero\n";
                cin>>nuevatarifa;
                cout<<"Mostrar nueva tarifa\n";
                cout<<"La nueva tarifa es " << nuevatarifa<<"\n";
            }break;
            case 8:
            {
                cout<<"Salir";
            }break;
            default:
            {
                cout<<"invalida";
            }break;
        }
    }while(opcion!=8);
}