#include <stdio.h>
void main()
{
    int a[5]={0,1,2,3,4};
    int *px=&a[0];
    printf("display the address and the value of the elements:\n");
    for(;px<&a[0]+5;px++)
        printf("px=%p  *px=%d\n",px,*px);
    px=&a[0];
    printf("after executing px=&a[0]:\n");
    printf("px=%p  *px=%d\n",px,*px);
    px+=3;
    printf("after px plus 3:\n");
    printf("px=%p  *px=%d\n",px,*px);
    px-=2;
    printf("after px minus 2:\n");
    printf("px=%p  *px=%d\n",px,*px);
    printf("*(++px)=%d\n",*(++px));
    printf("*(px++)=%d\n",*(px++));
    printf("px=%p  *px=%d\n",px,*px);
    printf("*(--px)=%d\n",*(--px));
    printf("*(px--)=%d\n",*(px--));
    printf("px=%p  *px=%d\n",px,*px);
}
