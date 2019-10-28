#include <stdio.h>
#define SIZE 2
void main()
{
    int x[SIZE][SIZE+1];
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++)
            scanf("%d",&x[i][j]);
        x[i][SIZE]=(x[i][0]+x[i][1])/2;
    }
    printf("\n");
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE+1;j++)
            printf("%p\tx[%d][%d]=%d\t",&x[i][j],i,j,x[i][j]);
        printf("\n");
    }
}
