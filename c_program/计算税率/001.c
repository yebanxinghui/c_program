#include<stdio.h>
int main(void)
{
    double x,tax,y;
    while(1){
        scanf("%lf",&x);
        if(x==0) return 0;
        if(x<=1000) tax=0;
        else if(x>1000&&x<=2000) tax=(x-1000)*0.05;
        else if(x>2000&&x<=3000) tax=50+(x-2000)*0.1;
        else if(x>3000&&x<=4000) tax=150+(x-3000)*0.15;
        else if(x>4000&&x<=5000) tax=300+(x-4000)*0.2;
        else tax=500+(x-5000)*0.25;
        printf("%lf\n",tax);
        scanf("%lf",&x);
        if(x==0) return 0;
        switch ((int)x/1000){
            case (0): tax=0;break;
            case (1):
                if((int)x==1000){tax=0;break;}
                tax=(x-1000)*0.05; break;
            case (2):
                if((int)x==2000){tax=(x-1000)*0.05;break;}
                tax=50+(x-2000)*0.1;break;
            case (3):
                if((int)x==3000){tax=50+(x-2000)*0.1;break;}
                tax=150+(x-3000)*0.15;break;
            case (4):
                 if((int)x==4000){tax=150+(x-3000)*0.15;break;}
                 tax=300+(x-4000)*0.2;break;
            default:
                if((int)x==5000){tax=300+(x-4000)*0.2;break;}
                tax=500+(x-5000)*0.25;break;
        }
        printf("%lf\n",tax);
    }
    return 0;
}
