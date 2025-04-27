#include <iostream>
using namespace std;
struct factura{  //cambiamos el struct de carro por factura para que tenga más sentido por todos los datos que se solicitan
    int idfactura;
    string placa;
    float Hentrada;
    float Hsalida;
    float valor;
};
int main()
{
    int opcion;
    int acumuladora=0;
    factura listafacturas[40];
    do
    {  
    cout<<"\n1. Ingresar una factura \n2. Salir y buscar facturas\n";
    cin>>opcion;
    switch(opcion){
        case 1:
            if(acumuladora>=40){
                cout<<"Limite de cupos alcanzado";
            }
            else{
            cout<<"Ingresa la información de la factura de servicio: \n";
            cout<<"id de la factura: ";
            cin>>listafacturas[acumuladora].idfactura;
            cout<<"Placa: ";
            cin>>listafacturas[acumuladora].placa;
            cout<<"Hora de entrada: ";
            cin>>listafacturas[acumuladora].Hentrada;
            cout<<"Hora de salida: ";
            cin>>listafacturas[acumuladora].Hsalida;
            cout<<"Valor a pagar: ";
            cin>>listafacturas[acumuladora].valor;
            acumuladora++;
            }break;
        case 2:
            {
            cout<<"salir y buscar informacion de una factura";
            }break;
        default:
            {
            cout<<"invalida";
            }break;
        }
    }while(opcion!=2);
    int idSolicitada;
    cout<<"\nDigite la id de la factura que nesecita: \n";
    cin>>idSolicitada;
    int aux = -1;
    for(int x=0; x<acumuladora; x++){
        if(listafacturas[x].idfactura==idSolicitada){
            aux=x;
            break;
        }
    }
    if(aux!=-1){
        cout<<"La información de la factura solicitada es:\n";
        cout<<"id de la factura: ";
        cout<<listafacturas[aux].idfactura<<"\n";
        cout<<"Placa: ";
        cout<<listafacturas[aux].placa<<"\n";
        cout<<"Hora de entrada: ";
        cout<<listafacturas[aux].Hentrada<<"\n";
        cout<<"Hora de salida: ";
        cout<<listafacturas[aux].Hsalida<<"\n";
        cout<<"Valor a pagar: ";
        cout<<listafacturas[aux].valor<<"\n";
    }
    else {
        cout<<"El id de la factura que solicito no fue encontrada";
    }
    
   
}









