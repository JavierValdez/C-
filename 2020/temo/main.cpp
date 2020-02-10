#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //bandera
    bool a=true;
    while(a){
    system("cls");
    char s;
    float nsonidos;
    cout<<"1)Determinar la temperatura por grillo campestre: \n2)Determinar temperatura por esperanza\n";
    cin>>s;
    if(s=='1'){
        cout<<"Ingrese la cantidad de sonidos por minuto: ";
        cin>>nsonidos;
        nsonidos=(((nsonidos-40)/4)+18)/1.8;
        cout<<"La temperatura es: "<<nsonidos;
    }else if(s=='2'){
        cout<<"Ingrese la cantidad de sonidos por minuto: ";
        cin>>nsonidos;
        nsonidos=(((nsonidos-40)/3)+28)/1.8;
        cout<<"La temperatura es: "<<nsonidos;

    }else{
        cout<<"Opcion incorrecta: ";
        a=false;
    }
system("pause");
}
    return 0;
}
