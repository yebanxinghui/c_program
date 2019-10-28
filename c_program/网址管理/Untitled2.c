#include<stdio.h>
int strcmp(char s[],char t[])
{
    int j;
    for(j=0;s[j]!='\0'&&t[j]!='\0';j++)
    {
        if(s[j]<t[j]) return 0;
        else return 1;
    }
}
struct web{
    char suoxie[20];
    char quanming[40];
    char URL[40];
};
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    struct web s[n],t[n];
    for(i=0;i<n;i++)
        scanf("%s%s%s",s[i].suoxie,s[i].quanming,s[i].URL);
    for(i=0;i<n;i++)
        printf("%-20s%-40s%s\n",s[i].suoxie,s[i].quanming,s[i].URL);
    printf("\n");
    for(j=0;j<n-1;j++){
        for(i=0;i<n-j-1;++i)
        if(strcmp(s[i].suoxie,s[i+1].suoxie)){
            t[i]=s[i];
            s[i]=s[i+1];
            s[i+1]=t[i];
        }
    }
    for(i=0;i<n;i++)
        printf("%-20s%-40s%s\n",s[i].suoxie,s[i].quanming,s[i].URL);
}
