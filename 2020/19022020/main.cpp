#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese la cantidad de numeros a ingresar: ";
    cin>>n;
    int b[n];
    cout<<"Ingrese "<<n<<" numeros\n";
    for(int y=0;y<n;y++){
        cin>>b[y];
    }
    for(int y=1;y<n;y++){
        if(b[y-1]>b[y]){
            b[y]=b[y-1];
        }
    }
    cout<<"El valor mayor es: "<<b[n-1];
    return 0;
}
