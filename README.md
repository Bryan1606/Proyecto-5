#include <iostream>
using namespace std;
int main()
{   int x, y, s, p;
    int cupos[5][8]= {0};
    int i=0,j=0;
    int opcion;
    int puesto;
    int acumuladora=0;
    do{
    cout<<"1. Ingreso de carros\n2. mostrar disponibilidad de cupos \n3. salida de carros\n";
    cin>>opcion;
    switch(opcion){
        
        case 1:
    {
         cout <<"Digite la placa del carro que quiere ingresar"<<endl;
         cin >> x;
         puesto = 0;
         for(i=0;i<5 && !puesto;i++)
        {
                for(j=0;j<8 && !puesto; j++)
                {
                    if(cupos[i][j]==0){
                        cupos[i][j]=1;
                        cout<<"Su carro a sido ingresado en el puesto["<<i<<"]["<<j<<"] \n";
                        puesto=1; 
                        acumuladora++;
                }
            }    
        for(i=0;i<5;i++){
            for(j=0;j<8;j++){          
            cout<<cupos[i][j]<<"";
        }cout<<"\n";   
    }break;
        case 2:
        cout<<"Este es el estado de los cupos 0 = libre y 1 = ocupado\n";
        for(i=0;i<5;i++){
            for(j=0;j<8;j++){
             cout<<cupos[i][j]<<"";
        }cout<<"\n";
    }break;
   
    default:
       {
          cout<<"invalida\n";
       }break;      
    } 
} }
}while (acumuladora==40 or opcion!=1);  
return 0;
}
