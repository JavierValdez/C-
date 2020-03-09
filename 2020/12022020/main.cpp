#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2;
    int residuo,cociente;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
    residuo=num1%num2;
    cociente=num1/num2;
    cout<<"El cociente es: "<<cociente;
    cout<<"\nEl residuo es: "<<residuo;
    return 0;
}
