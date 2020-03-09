#include <iostream>

using namespace std;

int main()
{
    int v;
    cout<<"Ingrese tamanio de burbuja: ";
    cin>>v;
    int burbuja[v];
    for(int z=0;z<v;z++){
        cin>>burbuja[z];
    }
    cout<<endl;
    int t;
    for(int z=0;z<v;z++){
        for(int z1=0;z1<v;z1++){
        if(burbuja[z]>burbuja[z1])
        cout<<burbuja[z]<<endl;
        t=burbuja[z];
        burbuja[z]=burbuja[z1];
        burbuja[z1]=t;
        }
    }
    for(int i=0;i<v;i++){
        cout<<burbuja[i]<<endl;
    }
    return 0;
}
