#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned char c;
    int i;

    do{
        c=getch();
        i=c;
        cout<<i<<endl;
    }while(c!=27);
}
