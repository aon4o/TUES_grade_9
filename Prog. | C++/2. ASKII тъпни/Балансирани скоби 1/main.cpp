#include <iostream>

using namespace std;

int main()
{
    int i;
    char a;
    i=0;
    a=0;
    while (a!='.'){
        cin>>a;
        if (a=='(')
        {
            i++;
            if (i<0) break;
        }
        if (a==')'){
            i--;
            if (i<0) break;

        }
    }
    if (i!=0)
        cout<<"skobiti sa greshni";
    else
        cout<<"skobiti sa werni";
}
