#include <iostream>
using namespace std;
float tipo(string );
int main()
{
    string name;
    float r;
    cout<<"Ingrese nombre ";
    cin>>name;
    r=tipo(name);
    cout<<r;
    return 0;
}
float tipo(string nombre){
    if(nombre=="Javier"){
        return 10;
    }else{
        return 0;
    }
}
