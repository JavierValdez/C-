#include <iostream>
using namespace std;
int suma(int, int, int);
int suma(int, int);
int main()
{
    int v;
    v=suma(5,10,10);
    cout<<"\n"<<v;
    return 0;
}
int suma(int a, int b, int c){
    cout<<"Suma de 3 numeros ";
    return a+b+c;

}
int suma(int a, int b){
    cout<<"Suma de 2 numeros ";
    return a+b;
}
