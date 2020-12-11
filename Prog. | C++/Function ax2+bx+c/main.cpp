#include <iostream>
#include <math.h>
using namespace std;

int uravn(float,float,float,float*,float*);

int main(){
    float a,b,c,x1,x2;
    cin>>a;
    cin>>b;
    cin>>c;


    switch(uravn(a,b,c,&x1,&x2)){
        case 1:cout<<"'X' moje da e vsqko chislo!";break;
        case 2:cout<<"Uravnenieto nqma reshenie!";break;
        case 3:cout<<"Kvadratnoto uravnenie nqma realni koreni!";break;
        case 4:cout<<"Imame 1 x >> x = "<<x1;break;
        case 5:cout<<"Imame 2 x >> x1 = "<<x1<<"; x2 = "<<x2;break;
    }
}

int uravn(float a, float b, float c, float *x1, float *x2){
    float d;
    if(a==0){
        if(b==0){
            if(c==0){
                return 1;
            }else{
                return 2;
            }
        }else{
            *x1=-c/b;
            return 4;
        }
    }else{
        d=b*b-(4*a*c);
        if(d<0){
            return 3;
        }else if(d==0){
            *x1=-b/(2*a);
            return 4;
        }else{
            *x1=(-b-sqrt(d))/2*a;
            *x2=(-b+sqrt(d))/2*a;
            return 5;
        }
    }
}
