#include <stdio.h>
#include <stdlib.h>

int d2v(char a) {
    char *s="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int i=0;
    while (s[i]!=a&&i<62) ++i;
    return i;
}
int main(int argc, char* argv[]){
    unsigned num=0;
    char n[20];
    unsigned n2=0;
    int i=0;
    int b1,b2;
    //b1=atoi(argv[1]),b2=atoi(argv[2]);

    printf("Put the system in which is your number: ");
    scanf("%d", &b1);
    printf("Put your number: ");
    scanf("%s",n);
    printf("Put the system in which you want the number: ");
    scanf("%d", &b2);

    for(int d=0; n[d]; ++d){
        n2*=b1;
        n2+=d2v(n[d]);
    }

    if(b2==10){
        num=n2;
    }else{
        for(int d=0; n[d]; ++d){
            while(n2%b2==0){
                n2/=b2;
                i++;
            }

        }
    }
    printf("Your number is --> %d",num);
}
