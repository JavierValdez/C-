#include <iostream>
using namespace std;
int main()
{
   int n[5];
   bool flag;
   int c=0,i,j,cp=0;
   cout<<"Numero 1: ";cin>>n[0];///11
   cout<<"Numero 2: ";cin>>n[1];///10
   cout<<"Numero 3: ";cin>>n[2];
   cout<<"Numero 4: ";cin>>n[3];
   cout<<"Numero 5: ";cin>>n[4];
   //Algoritmo 1
   for(i=0;i<5;i++){
        for(j=1;j<=n[i];j++){
            if(n[i]%j==0){
                c++;
            }
        }
        if(c==2){
            cp++;
        }
        c=0;
   }

   //Algoritmo 2
   for(i=0;i<=4;i++){
    flag=true;
    for(j=2;j<=(n[i]/2);j++){
        if(n[i]%j==0){
            flag=false;
            break;
        }
    }
    if(flag){
        c++;
    }
   }
   cout<<endl<<cp<<endl;
return 0;
}
