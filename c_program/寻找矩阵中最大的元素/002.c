#include <stdio.h>
void main()
{
    int a[3][4];
    int i,j,max,I,J;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>max){
                max=a[i][j];
                I=i,J=j;
            }
        }
    }
    printf("a[%d][%d]=%d\n",I,J,max);
}
