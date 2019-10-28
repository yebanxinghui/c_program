#include <stdio.h>
int main(void)
{
    unsigned char data,backup,t;
    int parity=0;
    data = getchar();
    backup = data;
    while(data)
    {
        t=data&1;
        parity^=t;
        data>>=1;
    }
    data=backup|(parity<<7);
    printf("The data is %#X\n",backup);
    printf("Parity-Check Code is %#x\n",data);
    system("pause");
    return 0;
}
