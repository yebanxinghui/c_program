#include<stdio.h>
void main()
{
    char tab[10000];
    int ins[]={1,3,7,8};
    int i,j,n,num;
    for (tab[0]=1,i=1;i<10000;i++)
        tab[i]=0;
    for (i=1;i<10000;i++){
        if(tab[i]==0)
        for(j=0;j<4;j++)
            if((num)=i+ins[j]<10000)
                tab[num]=1;
    }
    scanf("%d",&n);
    printf("%d\n",tab[n]);
}
