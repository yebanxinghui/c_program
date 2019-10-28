#include <stdio.h>
void main()
{
    int a,b,c,d,e;
    for (a=0;a<10;a++){
        for(b=0;b<10;b++){
            if(b-a==0) continue;
            for(c=0;c<10;c++){
                if((c-b)*(c-a)==0) continue;
                for (d=0;d<10;d++){
                    if((d-c)*(d-b)*(d-a)==0) continue;
                    for(e=0;e<10;e++){
                        if((e-d)*(e-c)*(e-b)*(e-a)==0) continue;
                        if((a*100+b*10+c)*(d*10+a)==b*1000+c*100+d*10+e)
                            printf("%d%d%d * %d%d = %d%d%d%d\n",a,b,c,d,a,b,c,d,e);
                    }
                }
            }
        }
    }
}
