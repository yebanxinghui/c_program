/******��һ��������������**********************
*******�ڶ���������������������ֵĸ���*******
*******����������һ������*********************/

#include<stdio.h>
void change(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
        *(p+2*n-1-i)=*(p+i);
    for(i=0;i<n;i++)
        *(p+i)=*(p+n+i);
}
int main(void)
{
    int i,j,N,n,x[20],*p=x;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++) scanf("%d",&x[j]);
        change(p,n);
        for(j=0;j<n;j++){
            if(j<n-1) printf("%d ",*(p+j));
            else printf("%d\n",*(p+j));
        }
    }
}
