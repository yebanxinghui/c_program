#include <stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==1||j==1){
                printf("%d ",a[i][j]);
            }
            else printf("  ");
        }
        printf("\n");
    }
}
