#include <iostream>

using namespace std;
int mulplicar(int &a, int &b){
    a=b*a;
    b=4*a;
    return a;
}
int main()
{
    int z,t;
    z=5;
    t=10;
    cout<<z<<endl;
    int r = mulplicar(z,t);
    cout<<z;
    return 0;
}



