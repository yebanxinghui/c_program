#include <stdio.h>
void main()
{
    int x,n;
    sizeof(int);
    scanf("%d %d",&x,&n);
    x=x<<(32-(n%32)) | x>>(n%32);
    printf("%d\n",x);
}
