#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,d,x,y;
    cout<<"Vywedi 'a' >> ";
    cin>>a;
    cout<<"Vywedi 'b' >> ";
    cin>>b;
    cout<<"Vywedi 'c' >> ";
    cin>>c;

    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"'x' moje da e vsqko chislo";
            }else{
                cout<<"n.r.";
            }
        }else{
            x=-c/b;
            cout<<"x = "<<x;
        }
    }else{
        d=b*b-(4*a*c);
        if(d<0){
            cout<<"n.r.k.";
        }else if(d==0){
            x=-b/(2*a);
            cout<<"x = "<<x;
        }else{
            x=(-b-sqrt(d))/2*a;
            y=(-b+sqrt(d))/2*a;
            cout<<"x1 = "<<x;
            cout<<"x2 = "<<y;
        }
    }
}
