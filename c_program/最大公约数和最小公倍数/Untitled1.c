#include <stdio.h>
int main()
{
    int a,b,small,big,t;
    while(a!=0||b!=0){
        scanf("%d%d",&a,&b);
        if(a==0||b==0) break;
        if(a>b){
            t=b;b=a;a=t;
        }
        if(b%a!=0){
            for(small=a ; a%small!=0 || b%small!=0 ; --small){
                ;
            }
            printf("%d ",small);
            for(big=b ; big%a!=0 || big%b!=0 ; ++big){
                ;
            }
            printf("%d\n",big);
        }
        else printf("%d %d\n",a,b);
    }
    return 0;
}
