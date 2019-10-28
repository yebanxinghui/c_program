/****************************************
如果找到了这个数，就输出这个数及它的位置
*****************************************/
#include<stdio.h>
int BinarySearch(int a[],int x,int n)
{
    int front=0,back=n-1,middle;
    while(front<=back){
        middle=(front+back)/2;
        if(x<a[middle])
            back=middle-1;
        else if(x>a[middle])
            front=middle+1;
        else
            return (middle);
    }
    return -1;
}

void main()
{
    int a[]={1,3,5,7,9,11,13,15,17,19},index,n;
    while(scanf("%d",&n)!=EOF){
        index=BinarySearch(a,n,10);
        if(index!=-1)
            printf("find %d!\nit's a[%d]\n",a[index],index);
        else
            printf("not find!\n");
    }
}
