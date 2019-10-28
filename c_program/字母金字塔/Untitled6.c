#include<stdio.h>
#include<ctype.h>
void main()
{
    char c,c1,c2,top;
    int i;
    printf("input a character:\n");
    top=isupper(c=getchar())?'A':(islower(c)?'a':'0');
    if(top){
        for(c1=top;c1<=c;++c1){
            for(i=1;i<=40-2*(c1-top);++i)
                putchar(' ');
            for(c2=top;c2<=c1;++c2)
                printf("%2c",c2);
            for(c2=c1-1;c2>=top;--c2)
                printf("%2c",c2);
            printf("\n");
        }
    }
}
