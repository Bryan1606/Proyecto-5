#include <iostream>
using namespace std;
int tarifa=4000;
int cupos;
struct carro{
    string placa;
    float Hingreso;
    float Hsalida;
    float valor;
};
int main()
{
    int opcion;
    int acumuladora=0;
    carro listacarros[40];
    cout<<"Bienvenidos a mi app \n";
    cout<<"La tarifa del parqueadero por hora es de $4000 \nHorario de atención de 6:00 a 21:00 \n  \n";
    cout<<"Seleccione un opción: \n \n";
    do
    {
    cout<<"\n1. Ingresar un carro al parqueadero. \n2. Dar salida a un carro del parqueadero.\n3. Informar los ingresos totales del parqueadero.\n4. Consultar la cantidad de puestos disponibles.\n5. Consultar el porcentaje de disponibilidad.\n6. Avanzar el reloj del parqueadero.\n7. Cambiar la tarifa del parqueadero.\n8. Salir\n\n";
    cin>>opcion;
        switch(opcion)
        {
            case 1:
                if(acumuladora>=40){
                    cout<<"Limite de cupos alcanzado";
                }
                else{
                cout<<"Ingresa la información del carro: \n";
                cout<<"Placa del carro: ";
                cin>>listacarros[acumuladora].placa;
                do{
                    cout<<"Hora de entrada: ";
                    cin>>listacarros[acumuladora].Hingreso;
                    if((listacarros[acumuladora].Hingreso<6.0)||(listacarros[acumuladora].Hingreso>21.00)){
                        cout<<"Hora invalida, intente una nueva \n";
                    }
                }while((listacarros[acumuladora].Hingreso<6.0)||(listacarros[acumuladora].Hingreso>21.00));
                acumuladora++;
                }break;
            case 2:
                {
                string placaSolicitada ;
                cout<<"\nDigite la placa del carro que va a dar salida: \n";
                cin>>placaSolicitada;
                int aux = -1;
                for(int x=0; x<acumuladora; x++){
                if(listacarros[x].placa==placaSolicitada){
                    aux=x;
                    break;
                    }
                }
                do{
                    cout<<"Hora de salida: ";
                    cin>>listacarros[aux].Hsalida;
                    if((listacarros[aux].Hsalida<6.0)||(listacarros[aux].Hsalida>21.00)){
                        cout<<"Hora invalida, intente una nueva \n";
                    }
                }while((listacarros[aux].Hsalida<6.0)||(listacarros[aux].Hsalida>21.00));
                if(aux!=-1){
                    cout<<"\nFactura: \n";
                    cout<<"Placa del carro: ";
                    cout<<listacarros[aux].placa<<"\n";
                    cout<<"Hora de entrada: ";
                    cout<<listacarros[aux].Hingreso<<"\n";
                    cout<<"Hora de salida: ";
                    cout<<listacarros[aux].Hsalida<<"\n";
                    cout<<"Valor a pagar: ";
                    listacarros[aux].valor=tarifa*(listacarros[aux].Hsalida - listacarros[aux].Hingreso);
                    cout<<listacarros[aux].valor<<"\n";
                    acumuladora--;
                }
                else {
                    cout<<"La placa que solicito no fue encontrada\n";
                }
            }break;
            case 3:
                {
                    cout<<"Mostrar total de dinero\n";
                }break;
            case 4:
                {
                    cout<<"Mostrar cupos disponibles\n";
                    cupos=40-acumuladora;
                    cout<<cupos;
                }break;
            case 5:
                {
                    cout<<"Mostrar porcentaje de cupos disponibles\n";
                }break;
            case 6:
                {
                    cout<<"Ingresar nueva hora del parqueadero\n";
                    
                }break;
            case 7:
                {
                    cout<<"Ingresar nueva tarifa del parqueadero\n";
                    cin>>tarifa;
                    
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