#include <stdio.h>
#include <string.h>
#define SIZE 100
void push(char c);
void pop(void);
char stack[SIZE];
char out[SIZE];
int top=-1,j=0;
int main(void)
{
    char in[]="15+21*(41-12)-1128/12";
    int i=0;
    memset(out,' ',SIZE);
    while(in[i]!='\0')
    {
        switch(in[i])
        {
        case '0': case '1':case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            out[j]=in[i];
            j++;
            break;
        case '+': case '-':
            j++;
            pop();
            push(in[i]);
            break;
        case '*': case '/':
            j++;
            if(stack[top]=='+'||stack[top]=='-')
                push(in[i]);
            else
                pop();
            break;
        case '(':
            push(in[i]);
            break;
        case ')':
            pop();
            top--;
            break;
        default:
            printf("illegal input!\n");
            return -1;
        }
        i++;
    }
    pop();
    out[j]='\0';
    printf("%s\n",out);
}
void push(char c)
{
    top++;
    stack[top]=c;
}
void pop(void)
{
    while(top>=0&&stack[top]!='(')
    {
        j++;
        out[j]=stack[top];
        top--;
        j++;
    }
    if(top==-1)
        j++;
}
