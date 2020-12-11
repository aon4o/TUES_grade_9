#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int s1=0;
    int s2=0;
    char num1[123];
    char num2[123];
    printf("Put the base number of the sistem in which is your number: ");
    scanf("%d",&s1);
    printf("Put the base number of the sistem in which you want your number: ");
    scanf("%d",&s2);
    printf("Put your number: ");
    scanf("%s",num1);


    puts(num1);
}
