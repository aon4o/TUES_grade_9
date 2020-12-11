#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char a;
    int i=0;
    do{
        a=getche();
        if (a=='('){
            i++;
        }else if (a==')'){
            i--;
            if (i<0) break;
        }
    }while(a!=13);
    if (i!=0)
        cout<<"skobiti sa greshni";
    else
        cout<<"skobiti sa werni";
}
