#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Ingrese una opcion: ";
    cin>>a;
    switch(a){
    case 1:
        cout<<"Usted marco 1";
        break;
    case 2:
        cout<<"Usted marco 2";
        break;
    case 3:
        cout<<"Usted marco 3";
        break;
    default:
        cout<<"Usted marco una opcion invalida";
    }
    return 0;
}
