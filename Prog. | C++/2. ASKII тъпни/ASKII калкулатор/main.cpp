#include <iostream>

using namespace std;

int main()
{
    float x, n;
    char z;
    cin>>n;
    x=n;
    cin>>z;

    while(z!='+'&&z!='-'&&z!='*'&&z!='/'&&z!='='){
        cout<<"Validnite znaci sa >> + - * /"<<endl;
        cin>>z;
    }
    while(z!='='){
        cin>>n;
        if(z=='+')
            x=x+n;
        if(z=='-')
            x=x-n;
        if(z=='*')
            x=x*n;
        if(z=='/'){
            while(n==0){
                cout<<"N ne trqbva da e 0!";
                cin>>n;
            }
            x=x/n;
        }
        cin>>z;
        while(z!='+'&&z!='-'&&z!='*'&&z!='/'&&z!='='){
            cout<<"Validnite znaci sa >> + - * /"<<endl;
            cin>>z;
        }

    }

    cout<<x;
}
