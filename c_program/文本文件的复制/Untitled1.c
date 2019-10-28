#include <stdio.h>
int main(int argc,char *argv[])
{
    int ch;
    if(argc!=3){
        printf("Arguments error!\n");
        exit(-1);
    }
    if(freopen(argv[1],"r",stdin)==NULL){
        printf("Can't open %s file!\n");
        exit(-1);
    }
    freopen(argv[2],"w",stdout);
    while((ch=getchar())!=EOF)
        putchar(ch);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
