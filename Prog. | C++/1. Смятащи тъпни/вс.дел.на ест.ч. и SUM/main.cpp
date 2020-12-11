#include <iostream>

using namespace std;

int main()
{
    int a,i,x;
    cout<<"Vyvedi si chisloto >> ";
    cin>>a;
    i=1;
    x=0;
    while (i<=a){
        if (a%i==0){
            cout<<i<<" e delitel."<<endl;
            x=x+i;
            }
        i++;
    }
    cout<<x<<" e sboryt na delitelite.";
}
