#include<stdio.h>
void main()
{
    int x,k,positive,negtive;
    k=1;
    positive=negtive =0;
    while(k<11)
    {
        scanf("%d",&x);
        if(x!=0)
        {
            if(x>0)
            {
                positive++;
            }else{
                ++negtive;
            }
        }
        k++;
    }
    printf("positive=%d\n",positive);
    printf("negtive=%d\n",negtive);
    system("pause");
}
