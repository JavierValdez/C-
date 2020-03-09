#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese la cantidad de datos: ";
    int z,y,a,m;
    cin>>z;
    cout<<"Ingrese "<<z<<" numeros\n";
    cin>>y;
    a=y;
    m=y;
    for(int x=1;x<z;x-=-1){
        cin>>y;
        if(y>=a){
            a=y;
        }
        if(y<=m){
            m=y;
        }
    }
    cout<<"El valor mayor encontrado es: "<<a;
    cout<<"El valor menor encontrado es: "<<m;

    return 0;
}
