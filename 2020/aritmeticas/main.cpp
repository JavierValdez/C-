#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char a;
    int b,c;
    cout<<"1)Suma\n2)Resta\n3)Raiz\n4)Potencia";
    cout<<"\nSeleccione una opcion: ";
    cin>>a;
    switch(a){
    case '1':
        cout<<"***Suma***\nIngrese dos numero: ";
        cin>>b>>c;
        cout<<"El resultado es: "<<b+c;
        break;

    case '2':
        cout<<"***Resta***\nIngrese dos numero: ";
        cin>>b>>c;
        cout<<"El resultado es: "<<b-c;
        break;

    case '3':
        cout<<"***Raiz***\nIngrese un numero: ";
        cin>>b;
        cout<<"El resultado es: "<<sqrt(b);
        break;
    case '4':
        cout<<"***Potencia***\nIngrese dos numero: ";
        cin>>b>>c;
        cout<<"El resultado es: "<<pow(b,c);
        break;
    default:
        cout<<"Opcion Incorrecta";
    }
    return 0;
}
