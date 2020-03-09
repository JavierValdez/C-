/*Ejercicio10
#include <iostream>
using namespace std;
int vect(int [],int);
int main()
{
    int r;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>r;
    int x[r];
    for(int y=0;y<r;y++){
        cout<<"Ingrese valor "<<y+1<<endl;
        cin>>x[y];
    }
    int retorno=vect(x,r);
    cout<<"La sumatoria de valores es: "<<retorno;
    return 0;
}

int vect(int j[],int l){
    int c=0;
    for(int k=0;k<l;k++){
        c=c+j[k];
    }
    return c;
}
*/

#include <iostream>
using namespace std;
char vect(int [],int);
int main()
{
    int r;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>r;
    int x[r];
    for(int y=0;y<r;y++){
        cout<<"Ingrese valor "<<y+1<<endl;
        cin>>x[y];
    }
    char retorno=vect(x,r);
    cout<<"Arreglo ordenado: "<<retorno;
    return 0;
}

char vect(int j[],int l){
    int c=0;
    for(int k=1;k<l;k++){
        if(j[k-1]>j[k]){
            return 'N';
        }
    }
    return 'S';
}
