#include <iostream>

using namespace std;

int main()
{
    int b;
    cin>>b;//20
    int are[b-1];//0    //19
    for(int x=0;x<b-1;x++){
        are[x]=x+2;
    }
    for(int x=0;x<b-1;x++){
        cout<<are[x]<<endl;
    }

    return 0;
}
