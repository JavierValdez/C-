#include <iostream>

using namespace std;

int main()
{
    char s,s1,s2,s3;
    cout<<"Ingrese un caracter: ";
    cin>>s;
    s1='d';
    s2='e';
    s3='f';
    if(s==s1){
        cout<<"Se cumple con s1";
    }else if(s==s2){
        cout<<"Se cumple con s2";
    }else if(s==s3){
        cout<<"Se cumple con s3";
    }else{
        cout<<"No se cumple ninguna condicion: ";
    }

    return 0;
}
