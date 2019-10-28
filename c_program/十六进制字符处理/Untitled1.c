#include <stdio.h>
void main()
{
    int i,n;
    char x;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;++i)
    {
        scanf("%1c",&x);
        if((x>='0'&&x<='9')||(x>='a'&&x<='f')||(x>='A'&&x<='F'))
        {
            if(x>='0'&&x<='9')
            {
                printf("%d\n",x-'0');
            }
            if(x>='a'&&x<='f')
            {
                printf("%d\n",x-'a'+10);
            }
            if(x>='A'&&x<='F')
            {
                printf("%d\n",x-'A'+10);
            }
            getchar();
        }
        else{
            printf("%d\n",x);
            getchar();
        }
    }
}
