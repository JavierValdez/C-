#include <iostream>
using namespace std;
int main()
{
    float consumo,descuento,impuesto;
    cout<<"Ingrese el consumo: ";
    cin>>consumo;
    if(consumo<=100){
        descuento=consumo*0.10;
    }else if(consumo<=200){
        descuento=consumo*0.20;
    }else{
        descuento=consumo*0.30;
    }
    impuesto=consumo*0.12;
    cout<<"Su compra tiene "<<descuento<<" de descuento\n";
    cout<<"Usted esta pagando "<<impuesto<<" de impuesto\n";
    cout<<"Su total es: "<<consumo-descuento+impuesto;
    return 0;
}
