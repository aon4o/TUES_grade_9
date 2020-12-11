#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    int a=argc-1,sum=0,i=0;

    do{
      i=atoi(argv[a]);
      sum=sum+i;
      a--;
    }while(a!=0);
    printf("%d ",sum);
}
