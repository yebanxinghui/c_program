int strlen(char s[])
{
    int i=0;
    while(s[i]!='\0') ++i;
    return i;
}
char *trim(char s[])
{
    int i,num,j=0,k=0,l=strlen(s);
    while(s[j]== ' '||s[j]=='\t'||s[j]=='\n'||s[j]=='\r')
        j++;
    i=l-1;
    while(s[i-k]== ' '||s[i-k]=='\t'||s[i-k]=='\n'||s[i-k]=='\r')
        k++;
    num=l-j-k;
    for(i=0;i<num;i++)
        s[i]=s[i+j];
    s[num]='\0';
    return s;
}
char *delete_c(char s[],char c)
{
    int j=0,k=0;
    while(s[j]!='\0'){
        if(s[j]!=c)
            s[k++]=s[j];
        j++;
    }
    s[k]='\0';
    return s;
}
