#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cout<<"Ingrese valor :";cin>>a;
    int valor[a-1];
    for(int y=0;y<a-1;y++){
        valor[y]=y+2;
    }

    for(int i=0;i<a;i++){
    if(pow(valor[i],2)>a){
        break;
    }
    for(int y=0;y<a-1;y++){
    if(valor[i]!=0){
        if(valor[y]%valor[i]==0&&i!=y&&valor[y]>valor[i]){
             valor[y]=0;
        }
    }

    }
    }

    for(int i=0;i<a-1;i++){
        if(valor[i]!=0){
            cout<<valor[i]<<endl;
        }

    }

    return 0;
}
