#include <stdio.h>
void main()
{
    double x,y;
    char op;
    inx:
        printf("input arithmetic expression:\n");
        scanf("%lf",&x);
        while((op=getchar())!='\n' ){
    iny:
        scanf("%lf",&y);
        switch(op){
        case '+':x+=y; break;
        case '-':x-=y; break;
        case '*':x*=y; break;
        case '/':
            if(y) x/=y;
            else{
                printf("divisor is zero,0input divisor again!\n");
                goto iny;
            }
            break;
        default:
            printf("illegal operator,input arithmetic expression again!\n");
            goto inx;
        }
        }
        printf("%lf\n",x);

}
