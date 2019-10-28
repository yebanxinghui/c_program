#include<stdio.h>
int main(void)
{
    int n,a[25],min,i,t;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) return 0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(t=0;t<n;++t){
            for(i=t+1;i<n;++i)
                if(a[i]<a[t])
                    min=a[i],a[i]=a[t],a[t]=min;
        }
        for(i=0;i<n;i++){
            if(i<n-1) printf("%d ",a[i]);
            else printf("%d\n",a[i]);
        }
    }
    return 0;
}
