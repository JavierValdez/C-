#include <iostream>

using namespace std;
struct estudiante{
char nombre[20];
char seccion='A';
int estado=true;
};
int main()
{
    estudiante a[5];
    for(int i=0;i<5;i++){
        cout<<"Ingrese el nombre: ";
        cin>>a[i].nombre;
        cout<<"Ingrese el seccion: ";
        cin>>a[i].seccion;
    }
    return 0;
}
