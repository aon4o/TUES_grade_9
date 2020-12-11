#include <iostream>

using namespace std;

int main()
{
    unsigned char a;
    cout<<"Vyvedi ASKII kod >> ";
    cin>>a;

    if (a>='a' && a<='z')
        a-=32;
    cout<<a;
}
