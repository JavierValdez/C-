#include <iostream>
#include <math.h>
using namespace std;
int main()
{   int b;
    cout << "Ingrese numero" << endl;
    cin>>b;
    int a[b-1];
    for(int i=0;i<b-1;i++){
        a[i]=i+1;
    }
    for(int l=1;l<b-1;l++){
        for(int d=2;d<a[l];d++){
        if (a[l]%d==0){
            a[l]=0;
        }
        }
    }
    for(int l=1;l<b-1;l++){

            if (a[l]!=0){
            cout<<"Primos: "<<a[l]<<endl;
        }

    }
    return 0;
}
