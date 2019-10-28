/****************************************************************************
可以输入-2，+2，2+3，2-3之类的，但是-2-->-2,+2-->2,2+3-->2 3,2-3-->2 3
首字母为空格则舍掉，首位为+，-则保留-，舍去+，数字串中间有其它字符则跳过。
***************************************************************************
‘；*/
#include <stdio.h>
#include <ctype.h>
#define NUMBER 100
int getint(int *pn)
{
    int c,sign;
    while(isspace(c=getchar()));
    if(!isdigit(c) && c!=EOF && c!= '+' && c!= '-'){
        printf("input error!\n");
        return 0;
    }
    sign = (c=='-')?-1:1;
    if(c=='+'||c=='-') c=getchar();
    for(*pn=0;isdigit(c);c=getchar())
        *pn= 10 * *pn +(c-'0');
    *pn *= sign;
    return c;
}
int main(void)
{
    int a[NUMBER],i,j,k;
    printf("input integers ends with Enter\n");
    for(i=0;i<NUMBER &&(k=getint(&a[i]))!='\n';)
        if(k) i++;
    for(j=0;j<=i;j++)
        printf("%8d",a[j]);
    printf("\n");
}
