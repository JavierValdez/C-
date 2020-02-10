#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int contador=0;
    bool a=true;
    jas:
        cout<<"Hola "<<contador<<endl;
        contador++;
    if(contador==10){
        a=false;
    }
    if(a){
        goto jas;
    }



    return 0;
}
