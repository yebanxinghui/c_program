#include <stdio.h>
int M(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=(x%10);
        x/=10;
    }
    sum=sum%6+1;
    return sum;
}
void main()
{
    int j,i,n,sum,SUM;
    scanf("%d",&n);
    int a,b;
    for(i=1;i<n;++i){
        scanf("%d%d",&a,&b);
        sum=M(a)+M(b);
        if(sum==7||sum==11) { printf("success!\n"); continue;}
        else if(sum==2||sum==3||sum==12) { printf("fail!\n"); continue;}
        else {
            j=1;
            do{
                SUM=M(a+j)+M(b+j);
                ++j;
                if(SUM==7){ printf("fail!\n"); break;}
            }while(SUM!=sum);
            if(SUM==sum) printf("success!\n");
        }
    }
}
