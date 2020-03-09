#include <iostream>
#include <math.h>
using namespace std;
//Dado un numero devolver su cantidad de cifras
//Dada una cantidad de digitos mostrar los numeros que contienen la cantidad de digitos
int main()
{
    int b;
    cout<<"Ingrese un numero: ";
    cin>>b;
    /*
    int c;
    for(c=0;b!=0;c++){
        b=b/10;
    }
    cout<<c;*/
    for(int c=pow(10,b-1);c<pow(10,b);c++){
        cout<<c<<"\n";
    }
      cout<<"Quinto Computacion somos una familia feliz!"<<endl;
      cout<<"Somos los mejores";

    return 0;
}
