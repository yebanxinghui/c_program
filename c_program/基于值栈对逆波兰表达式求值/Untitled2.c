#include <stdio.h>
#define SIZE 1000
void push(int n);
int pop(void);
int stack[SIZE];
int top=-1;
int main(void)
{
    char ch,ch1;
    int i=0,n=0,right_oprand;
    ch=ch1='\0';
    while((ch=ch1,ch=getchar())!=EOF)
    {
        switch(ch)
        {
            case '0': case '1':case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                n=n*10+(ch-'0');
                break;
            case ' ':
            case '\n':
                switch(ch1)
                {
                case '+':
                    right_oprand=pop();
                    push(pop()+right_oprand);
                    break;
                case '-':
                    right_oprand=pop();
                    push(pop()-right_oprand);
                    break;
                case '*':
                    right_oprand=pop();
                    push(pop()*right_oprand);
                    break;
                case '/':
                    right_oprand=pop();
                    if(right_oprand)
                        push(pop()/right_oprand);
                    else
                    {
                        printf("divide by 0!");
                        return -1;
                    }
                    break;
                case ' ':
                    break;
                default:
                    push(n);
                    n=0;
                }
            case '+': case '-': case '*': case '/':
                break;
            default:
                printf("illegal input!\n");
                return -1;
        }
    }
    printf("result is %d\n",pop());
    return 0;
}
void push(int n)
{
    top++;
    stack[top]=n;
}
int pop(void)
{
    int x;
    x=stack[top];
    top--;
    return x;
}
