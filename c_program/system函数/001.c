#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    system("dir c:\\");
    printf("mycopy.exe is in root directory or not? y/n\n");
    ch=getchar();
    getchar();
    if(ch=='Y'||ch=='y'){
        system("c:\\mycopy.exe");              /***** ‰»Î“‘EOFΩ·Œ≤*****/
        printf("clear screen or not?y/n \n");
        ch=getchar();
        getchar();
        if(ch=='Y'||ch=='y')
            system("cls");
        printf("input any character to finish!\n");
        getchar();
    }
    else{
        printf("no mycopy.exeprogram in root directory!\n");
        exit(-1);
    }
    return 0;
}
