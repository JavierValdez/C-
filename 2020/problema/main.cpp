#include <iostream>

using namespace std;

int main()
{
    char cliente,fpago;
    float compra,descuento=0,recargo=0;
    cout<<"Ingrese tipo de cliente: ";
    cin>>cliente;
    cout<<"Ingrese forma de pago: ";
    cin>>fpago;
    cout<<"Ingrese la cantidad comprada: ";
    cin>>compra;
    //Cliente general
    if(cliente=='G'){
        if(fpago=='C'){
            descuento=compra*0.15;
        }else if(fpago=='P'){
            recargo=compra*0.10;
        }
    }
    //Cliente afiliado
    if(cliente=='A'){
        if(fpago=='C'){
            descuento=compra*0.2;
        }else{
            recargo=compra*0.05;
        }
    }

    cout<<"Usted debe pagar: "<<compra+recargo-descuento;



    return 0;
}
