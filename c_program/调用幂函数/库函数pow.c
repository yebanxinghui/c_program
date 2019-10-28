#include<stdio.h>
#include<math.h>
void main()
{
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=5;j++){
            printf("%.0lf\t",pow(i,j));
        }
        printf("\n");
    }
}
