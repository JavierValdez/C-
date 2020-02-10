#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int v[20][20];
    for(int rows=0;rows<20;rows++){
        for(int cols=0;cols<20;cols++){
                v[cols][rows]=0;
        }
    }
    char a;
    int n=19;
    while (true){
    system("CLS");
    for(int rows=0;rows<20;rows++){
        for(int cols=0;cols<20;cols++){
                cout<<v[cols][rows]<<" ";
        }
        cout<<endl;
    }
    a=getch();
    if(a=='8'){
        v[3][n]=1;
        n--;
    }
    }
    return 0;
}
