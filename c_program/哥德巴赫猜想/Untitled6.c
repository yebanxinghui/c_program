#include <stdio.h>
#include<math.h>
int main(void)
{
    int num,a,b;
    int i,j,s[1000];
    scanf("%d",&num);
    if(num%2!=0&&num<4) return 0;
    else{
        int t,n,k,m=1;
        for(k=0,i=0,n=2;n<num;++n)
        {
            for(t=2;t<=sqrt(n);++t)
                if(!(m=n%t)) break;
            if(m) s[i++]=n;
        }
        for(i=0;s[i]<num;i++){
            a=s[i];
            for(j=i;s[j]<num;j++){
                b=s[j];
                if(num==a+b){
                    printf("%d=%d+%d\n",num,a,b);
                    break;
                }
            }
            if(num==a+b) break;
        }
    }
    return 0;
}
