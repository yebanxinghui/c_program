#include<stdio.h>
int main(int argc,char *argv[])
{
    int n=0;
    while(n<argc){
        printf("&argv[%d]=%p\t",n,&argv[n]);
        printf("argv[%d]=%p\t",n,argv[n]);
        printf("argv[%d]->%s\n",n,argv[n]);
        n++;
    }
    return 0;
}
