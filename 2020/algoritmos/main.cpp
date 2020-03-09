#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main(){

    int l=10;
    char nombre[l][20];
    char arr[20];
    for(int a=0;a<l;a++){
        cout<<"Ingrese nombre: ";cin>>nombre[a];
    }
    for(int a=0;a<l;a++){
        for(int b=0;b<l;b++){
            if(strcmp(nombre[a],nombre[b])==-1){
                cout<<nombre[a]<<"  "<<nombre[b]<<strcmp(nombre[a],nombre[b])<<endl;
               strcpy(arr,nombre[a]);
               strcpy(nombre[a],nombre[b]);
               strcpy(nombre[b],arr);
            }
        }
    }
    for(int x=0;x<l;x++){
        cout<<nombre[x]<<endl;
    }
}
