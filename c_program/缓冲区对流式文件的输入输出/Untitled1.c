#include <stdio.h>
void main()
{
    FILE *fp;
    char a[100]="xxxxxx",*buf=a;
    int i='a';
    fp=fopen("d:\\abcd.dat","w+");
    setvbuf(fp,buf,_IOFBF,60);
    while(i<='z')
        fputc(i++,fp);
    i=0;
    while(i<=26)
        putchar(a[i++]);
    putchar('\n');
    fflush(fp);
    fclose(fp);
}
