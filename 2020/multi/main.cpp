#include <iostream>
#include <conio.h>
using namespace std;
int multi[20][20];
int pos=0;
void mover(char);
int main()
{
    int a,b,c;
    char m;

    for(int cara=0;cara<20;cara++){
        for(int fila=0;fila<20;fila++){
            multi[cara][fila]=0;
        }
    }
    while(true){
    system("CLS");
    for(int cara=0;cara<20;cara++){
        for(int fila=0;fila<20;fila++){
            cout<<multi[cara][fila]<<" ";
        }
        cout<<"\n";
    }
    m=getch();
    mover(m);
    }
    return 0;
}
void mover(char s){
for(int cara=0;cara<20;cara++){
        for(int fila=0;fila<20;fila++){
            multi[cara][fila]=0;
        }
    }
if(s=='2'){
    for(int cara=pos;cara<pos+3;cara++){
        for(int fila=0;fila<3;fila++){
            multi[cara][fila]=1;
        }
    }
}
pos++;
}
