#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
    int a[20][20];
    int c;
    system("Color 0a");
    while (true){
        srand(time(NULL));

    for(int x=0;x<20;x++){
        for(int v=0;v<20;v++){
            c=rand()%(0-9);
            cout<<c<<"  ";
        }
        cout<<"\n";

    }
    system("CLS");

    }

    return 0;
}
