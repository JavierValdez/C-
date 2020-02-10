#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct data{
int identificador;
char nombre[10]={'\0'};
char apellido[10]={'\0'};
char estado='A';
};

FILE *Reg;
void deletelog();
void ingreso();
void mostrar();
void eliminar();
int main()
{
    deletelog();

    mostrar();
    return 0;
}
void ingreso(){
    data usuarios;
    cout<<"Ingrese un identificador";
    cin>>usuarios.identificador;
    cout<<"Ingrese un nombre: ";
    cin>>usuarios.nombre;
    cin.ignore();
    cout<<"Ingrese un apellido: ";
    cin>>usuarios.apellido;
    Reg=fopen("secuencial.dat","ab");
    fwrite(&usuarios,sizeof(data),1,Reg);
    fclose(Reg);

}
void mostrar(){
    Reg=fopen("secuencial.dat","rb");
    data muestra;
    while(fread(&muestra,sizeof(data),1,Reg)){
        if(muestra.estado=='A'){
        cout<<muestra.identificador<<endl;
        cout<<muestra.nombre<<endl;
        cout<<muestra.apellido<<endl;
        }
        }
    fclose(Reg);
}
void eliminar(){//Eliminar Fisico
    FILE *Temp;
    Reg=fopen("secuencial.dat","rb");
    Temp=fopen("temporal.dat","ab");
    data muestra;
    int n;
    cout<<"Ingrese el identificador de los datos que desea eliminar: ";
    cin>>n;
    while(fread(&muestra,sizeof(data),1,Reg)){
        if(muestra.identificador==n){
            cout<<"Datos eliminados";
        }else{
            fwrite(&muestra,sizeof(data),1,Temp);
        }
    }
    fclose(Temp);
    fclose(Reg);
    remove("secuencial.dat");
    rename("temporal.dat","secuencial.dat");
}

void deletelog(){
    Reg=fopen("secuencial.dat","rb+");
    data muestra;
    int x=sizeof(data);
    int n;
    cout<<"Ingrese el identificador de los datos que desea eliminar: ";
    cin>>n;
    while(fread(&muestra,sizeof(data),1,Reg)){
        if(muestra.identificador==n||muestra.estado=='A'){
            fseek(Reg,-x,SEEK_CUR);
            cout<<"Datos eliminados";
            muestra.estado='D';
            fwrite(&muestra,sizeof(data),1,Reg);
            cout<<muestra.estado;
            break;
        }
    }
    fclose(Reg);
}
