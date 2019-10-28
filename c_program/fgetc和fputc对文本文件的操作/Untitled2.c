#include<stdio.h>
#include<stdlib.h>
void copy_TERM(const char *filename);
void type(const char *filename);
int main(void)
{
   copy_TERM("d:\\aaa.dat");
   type("d:\\aaa.dat");
   return 0;
}
void copy_TERM(const char *filename)
{
    FILE *fp;
    char ch;
    if((fp=fopen(filename,"w"))==NULL){
        printf("can't open the file!");
        exit(-1);
    }
    while((ch=fgetc(stdin))!=EOF)
        fputc(ch,fp);
    fclose(fp);
}
void type(const char *filename)
{
    char ch;
    FILE *fp;
    if((fp=fopen(filename,"r"))==NULL){
        printf("can't open the file!");
        exit(-1);
    }
    while((ch=fgetc(fp))!=EOF)
        fputc(ch,stdout);
    fclose(fp);
}
