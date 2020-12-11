#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int suma(int);
int fact(int);
int broy(int);
int sumaCifN(int);
int imaLiA(int, int);
int kolkoAvN(int, int);
int piramidka(int,unsigned char);
int uravn(float,float,float,float*,float*);

int wait();
int exi();

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();

int main()
{
    int i,j;
    i=1;
    j=1;
    unsigned char c;
    while (j){
        switch(i){
            case 1:system("CLS");cout<<"->1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 2:system("CLS");cout<<"  1. 1-N\n->2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 3:system("CLS");cout<<"  1. 1-N\n  2. N!\n->3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 4:system("CLS");cout<<"  1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n->4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 5:system("CLS");cout<<"  1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n->5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 6:system("CLS");cout<<"  1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n->6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 7:system("CLS");cout<<"  1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n->7. Piramidka\n  8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 8:system("CLS");cout<<"  1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n->8. ax*x+bx+c=0\n  9. exit"<<endl;break;
            case 9:system("CLS");cout<<"  1. 1-N\n  2. N!\n  3. Broqt na cifrite v N\n  4. Simata na cifrite v N\n  5. Dali A se sreshta v N\n  6. Kolko pyti se sreshta A v N\n  7. Piramidka\n  8. ax*x+bx+c=0\n->9. exit"<<endl;break;
        }
        c=getch();
        if(c==0 or c==224){
            c=getch();
            if(c==80||c==77){if(i<9)i++;else if(i==9)i=1;};
            if(c==72||c==75){if(i>1)i--;else if(i==1)i=9;};
        }else if (c==13){
            j=0;
            switch(i){
                case 1:f1();wait();j=exi();break;
                case 2:f2();wait();j=exi();break;
                case 3:f3();wait();j=exi();break;
                case 4:f4();wait();j=exi();break;
                case 5:f5();wait();j=exi();break;
                case 6:f6();wait();j=exi();break;
                case 7:f7();wait();j=exi();break;
                case 8:f8();wait();j=exi();break;
                case 9:j=exi();break;
            }
        }
    }
}

void f1(){
    system("CLS");
    int n;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"1 - N >> "<<suma(n)<<endl;
}
void f2(){
    system("CLS");
    int n;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"N! --> "<<fact(n)<<endl;
}
void f3(){
    system("CLS");
    int n;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"Broqt na cifrite v N --> "<<broy(n)<<endl;
}
void f4(){
    system("CLS");
    int n;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"Simata na cifrite v N --> "<<sumaCifN(n)<<endl;
}
void f5(){
    system("CLS");
    int n,a;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"Wywedi A >> ";
    cin>>a;
    if(imaLiA(n,a)!=0) cout<<"A se sreshta w N!"<<endl;
    else cout<<"A NE se sreshta w N!"<<endl;
}
void f6(){
    system("CLS");
    int n,a;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"Wywedi A >> ";
    cin>>a;
    cout<<"Kolko pyti se sreshta A v N --> "<<kolkoAvN(n,a)<<endl;
}
void f7(){
    system("CLS");
    int n;
    unsigned char b;
    cout<<"Vyvedi N >> ";
    cin>>n;
    cout<<"Wywedi znak >> ";
    cin>>b;
    piramidka(n,b);
}
void f8(){
    system("CLS");
    float a,b,c,x1,x2;
    cout<<"Wywedi A --> ";
    cin>>a;
    cout<<"Wywedi B --> ";
    cin>>b;
    cout<<"Wywedi C --> ";
    cin>>c;
    switch(uravn(a,b,c,&x1,&x2)){
        case 1:cout<<"'X' moje da e vsqko chislo!"<<endl;break;
        case 2:cout<<"Uravnenieto nqma reshenie!"<<endl;break;
        case 3:cout<<"Kvadratnoto uravnenie nqma realni koreni!"<<endl;break;
        case 4:cout<<"Imame 1 x >> x = "<<x1<<endl;break;
        case 5:cout<<"Imame 2 x >> x1 = "<<x1<<"; x2 = "<<x2<<endl;break;
    }
}

int suma(int n){
    int p;
    p=1-n;
    return p;
}
int fact(int n){
    if (n<0){return 0;}
    int p=1,i;
    for(i=1;i<=n;i++)
            p=p*i;
    return p;
}
int broy(int n){
    int p=0;
    if (n<0) n*=(-1);
    if (n!=0){
        while (n>0){
            n/=10;
            p++;
        }
    }else p++;
    return p;
}
int sumaCifN(int n){
    int m;
    if (n<0)
        n=n*(-1);
    m=0;
    while (n>0){
        m+=n%10;
        n/=10;
    }
    return m;
}
int imaLiA(int n, int a){
    int m,i;
    if (n<0)
        n=n*(-1);
    i=0;
    while (n>0){
        m=n%10;
        if (m==a){
            i++;
            break;
        }
        n/=10;
    }
    return i;
}
int kolkoAvN(int n, int a){
    int m,i;
    if (n<0)
        n=n*(-1);
    i=0;
    while (n>0){
        m=n%10;
        if (m==a)
            i++;
        n/=10;
    }
    return i;
}
int piramidka(int n,unsigned char b){
    system("CLS");
    int j,i=1;
    for(;i<=n;){
        for(j=1;j<=i;j++)
            cout<<b;
        cout<<endl;
        i++;
    }
    return 0;
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

int wait(){
    unsigned char c;
    cout<<endl<<"Press ENTER to continue.";
    while (1){
    c=getch();
    if(c==13)return 0;
}}
int exi(){
    unsigned char c;
    int j=1,i=1;
    while(j){
        switch(i){
            case 1:system("CLS");cout<<"Do you want to -->exit\n         or to    continue?";break;
            case 2:system("CLS");cout<<"Do you want to    exit\n         or to -->continue?";break;
        }
        c=getch();
        if(c==0 or c==224){
            c=getch();
            if(c==80||c==77){if(i<2)i++;};
            if(c==72||c==75){if(i>1)i--;};
        }else if (c==13){
            switch(i){
                case 1:return 0;break;
                case 2:return 1;break;
            }
        }
    }
}
