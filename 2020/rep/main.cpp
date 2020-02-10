#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    bool flag;
    char s;
    char cc[2]={'\0'};
    char bb[2]={'\0'};
    char nombre1[28]={'a','b','c','f','e','d','g','h','i','j','k','l','o','n','m','p','q','r','s','t','u','v','w','x','y','z'};
    for(int a=0;a<28;a++){
        for(int b=0;b<28;b++){
            cc[0]=nombre1[a];
            bb[0]=nombre1[b];
            if(strcmp(cc,bb)==1){
                s=nombre1[b];
                nombre1[b]=nombre1[a];
                nombre1[a]=s;
    }
        }
    }
    for(int a=0;a<28;a++){
        cout<<nombre1[a]<<endl;
    }


    return 0;
}
