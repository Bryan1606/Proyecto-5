#include <iostream>
using namespace std;

struct Carro
{
    //atributos
    float Salida;
    float Ingreso;
    string placa;
    //métodos
    void IngresarPlaca();
    void asignarSalida();
    void asignarIngreso();
};

void Carro::IngresarPlaca(){
    cout<<"Ingresar placa del vehiculo: \n";
    cin>>placa;
};

void Carro::asignarIngreso(){
    cout<<"Ingresar hora de entrada: \n";
    cin>>Ingreso;
};

void Carro::asignarSalida(){
    cout<<"Ingresar hora de Salida: \n";
    cin>>Salida;
};
struct Parqueadero
{
    //atributos
    float PorDisponible;
    int Disponible;
    //métodos
    void MostrarDisponibles();
    void MostrarPorDisponible();
};

void Parqueadero::MostrarDisponibles(){
    cout<<"Mostrar puestos disponibles: \n";
    cin>>Disponible;
};

void Parqueadero::MostrarPorDisponible(){
    cout<<"Mostrar porcentaje de puestos disponibles: \n";
    cin>>PorDisponible;
};
struct puesto
{
    //atributos
    int puesto;
    float TarifaHora;
    string estadoP;
    //métodos
    void asignarnumeroP();
    void mostrarTarifaHora();
    void mostrarestadoP();
};

void puesto::asignarnumeroP()
{
    cout<<"Elija su puesto";
    cin >>puesto;
    cout<<"Este es tu puesto"<<puesto;
};

void puesto::mostrarTarifaHora()
{
    cout<<"Tarifa por hora"<<TarifaHora;
};

void puesto::mostrarestadoP()
{
    cout<<"Estado de tu puesto"<<estadoP;
};
int main() 
{} 
