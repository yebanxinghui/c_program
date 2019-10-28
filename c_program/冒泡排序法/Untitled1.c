#include <stdio.h>
void bubble_sort(int x[],int n);
void main()
{
    int n,i;
    while(scanf("%d",&n) && n!=0 && n<21){
        int x[n];
        for(i=0;i<n;i++)
            scanf("%d",&x[i]);
        bubble_sort(x,n);
    }
}
void bubble_sort(int x[],int n)
{
    int i,j,t,k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(x[j]>x[j+1]){
                t=x[j];x[j]=x[j+1];x[j+1]=t;
            }
        }
    }
    for(k=0;k<n;k++){
        if(k<n-1) printf("%d ",x[k]);
        else printf("%d\n",x[k]);
    }
}
