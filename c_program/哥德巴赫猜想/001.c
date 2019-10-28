#include <stdio.h>
#include<math.h>
int main(void)
{
    int begin,end,a,b;
    int t,i,j,s[25]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    while(1)
    {
        scanf("%d%d",&begin,&end);
        if(begin==0) return 0;
        if(begin>=6,end>=begin)
        {
            for(t=begin; t<=end; ++t)
            {
                if(t%2!=0) continue;
                for(i=0; s[i]<t; i++)
                {
                    a=s[i];
                    for(j=i; s[j]<t; j++)
                    {
                        b=s[j];
                        if(t==a+b)
                        {
                            printf("%d=%d+%d\n",t,a,b);
                            break;
                        }
                        if(t==a+b) break;
                    }
                    if(t==a+b) break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
