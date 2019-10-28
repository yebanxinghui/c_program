#include <stdio.h>
void main()
{
    int a[3][4],b[4][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            b[j][i]=a[i][j];
        }
    }
    for(j=0;j<4;j++){
        for(i=0;i<3;i++){
            printf("%d ",b[j][i]);
        }
        printf("\n");
    }
}
