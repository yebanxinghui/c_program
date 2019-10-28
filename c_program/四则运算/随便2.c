#include <stdio.h>
int main(void)
{
    int i,t;
    double x,y,sum;
    char op;
    while((scanf("%d %lf %lf %c",&t,&x,&y,&op))!=EOF){
        if(x<100000&&x>-100000&&y<100000&&y>-100000&&x!=0&&y!=0){
            if(t==0){
                if(op=='+') sum=x+y;
                else if(op=='-') sum=x-y;
                else if(op=='*') sum=x*y;
                else if(op=='/') {if(y!=0) sum=x/y;}
                printf("After if-else processing,the result is : %0.2lf\n",sum);
            }
            if(t==1){
                switch(op){
                    case '+': sum=x+y;break;
                    case '-': sum=x-y;break;
                    case '*': sum=x*y;break;
                    case '/': if(y!=0) sum=x/y;break;
                }
                printf("After switch processing,the result is : %0.2lf\n",sum);
            }
            if(t==2){
                if(op=='+') sum=x+y;
                else if(op=='-') sum=x-y;
                else if(op=='*') sum=x*y;
                else if(op=='/') { if(y!=0) sum=x/y; }
                printf("After if-else processing,the result is : %0.2lf\n",sum);
                switch(op){
                    case '+': sum=x+y;break;
                    case '-': sum=x-y;break;
                    case '*': sum=x*y;break;
                    case '/': if(y!=0) sum=x/y;break;
                }
                printf("After switch processing,the result is : %0.2lf\n",sum);
            }
        }
        printf("\n");
    }
}
