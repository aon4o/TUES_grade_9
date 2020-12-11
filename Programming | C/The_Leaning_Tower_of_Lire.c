#include <stdio.h>
#include <stdlib.h>

int main()
{
    int blocks;
    float block_length;
    float tower_length=0;
    float tower_length_by_blocks=0;
    printf("The Leaning Tower of Lire\n\n");

    printf("Enter the number of blocks you've got: ");
    scanf("%d", &blocks);
    printf("Enter the length of the blocks: ");
    scanf("%f",&block_length);
    printf("\n");

    int i=1;
    printf("Block No. --> Outer part\n");
    for(i; i<=blocks; ++i){
        printf("Block %d --> 1/%d = %f\n",i,2*i,block_length/(2*i));
        tower_length+=block_length/(2*i);
        tower_length_by_blocks+=1.0/(2*i);
    }
    printf("\n");
    printf("The total length of the tower is --> %f\n",tower_length);
    printf("which equals %f times the length of the blocks.\n",tower_length_by_blocks);
}
