#include <iostream>

using namespace std;

int main()
{
    /*
    //Bandera
    bool bandera=true;
    int numero=1;
    while(bandera){
        if(numero==10){
            bandera=false;
        }
        cout<<"\n"<<numero;
        numero++;
    }*/





    char centinela='e';
    char valor;
    cout<<"Ingrese un dato: ";
    cin>>valor;
    //valor=toupper(valor);
    valor=tolower(valor);
    while(centinela==valor){
        cout<<"\nEjecucion:\n";
        cout<<"Ingrese un dato: ";
        cin>>valor;
        //valor=toupper(valor);
        valor=tolower(valor);
    }
    return 0;
}
