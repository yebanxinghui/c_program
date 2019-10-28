#include <stdio.h>
void main()
{
    int a,b,c,sum=0;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            if(b-a==0) continue;
            for(c=1;c<=4;c++){
                if((c-a)*(c-b)==0) continue;
                sum++;
            }
        }
    }
    printf("%d\n",sum);
}
