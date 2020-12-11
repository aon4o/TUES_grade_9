#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    int a=argc-1;
    while(a!=0){
        printf("%s ",argv[a]);
        a--;
    }
}
