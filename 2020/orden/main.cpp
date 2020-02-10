#include <iostream>

using namespace std;

int main()
{
    int var1[5];
    for(int i=0;i<5;i++){
        cin>>var1[i];
    }
    int temp;
    for(int a=0;a<5;a++){
    for(int b=0;b<5;b++){
            if(var1[a]<var1[b]){
                temp=var1[a];
                var1[a]=var1[b];
                var1[b]=temp;
            }
        }
    }
cout<<"\n\n\n\n";
    for(int y=0;y<5;y++){
        cout<<var1[y]<<endl;
    }
    return 0;
}
