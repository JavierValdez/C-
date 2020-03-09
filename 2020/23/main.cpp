#include <iostream>

using namespace std;

int main()
{
    float a,x,b;
    cout<<"Ingrese el valor de a: ";cin>>a;
    cout<<"Ingrese el valor de b: ";cin>>b;
    if(a==0){
        cout<<"Su ecuacion no es de primer grado";
    }else{
    cout<<"Su ecuacion es: "<<a<<" x + "<<b<<" = 0\n";
    cout<<"\n Despeje: "<<"x = -"<<b<<" / "<<a;
    x=(-b)/a;
    cout<<"\nEl valor encontrado de X es: "<<x;
    }

    return 0;
}
