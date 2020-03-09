#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int valor;
    cin>>valor;
    int data[2][valor-1];

    int x=0;
    for(int a=0;a<valor-1;a++){
        data[0][a]=a+2;
        data[1][a]=1;
    }
    for(int a=0;a<valor-1;a++){
        for(int b=0;b<valor-1;b++){
            if(data[0][b]%data[0][a]==0&&(data[0][a]<pow(valor-1,2))&&data[1][b]==1&&data[0][a]!=data[0][b]){
            cout<<data[0][b]<<"  "<<data[0][a]<<endl;
               data[1][b]=0;
               }
        }
    }
    for(int w=0;w<valor-1;w++){

        if(data[1][w]==1){
            cout<<data[0][w]<<endl;
        }

    }




                          return 0;
}
