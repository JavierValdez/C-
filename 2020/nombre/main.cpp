#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[10];
    char name1[10];
    char nametemp[10];
    cin>> name;
    cin>>name1;
    strcpy(nametemp,name);
    cout<<nametemp;
    return 0;
}
