/******************************
��n������Ҫ����n-1�αȽϣ�
��j�αȽ���Ҫ����n-j�������Ƚ�
******************************/
#include <stdio.h>
void bubble_sort(int a[],int n);
int main(void)
{
    int x[]={31,25,12,86,42,6};
    bubble_sort(x,6);
    return 0;
}
void bubble_sort(int a[],int n)
{
    int i,j,t,k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    for(k=0;k<n;k++){
        printf("%d  ",a[k]);
        }
    printf("\n");
    }
}
