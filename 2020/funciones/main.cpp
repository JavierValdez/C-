#include <iostream>
using namespace std;
void saludo(string);
int main()
{
    string a;
    cout<<"Ingrese un nombre: ";
    cin>>a;
    saludo(a);
    cin>>a;
    saludo(a);
    cin>>a;
    saludo(a);
    return 0;
}
void saludo(string nombre){
    cout<<"Buenos dias "<<nombre;
}
