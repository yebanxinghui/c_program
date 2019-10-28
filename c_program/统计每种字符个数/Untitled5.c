#include<stdio.h>
void main()
{
    int i,j=0,c;
    char ch[100]={0};
    for(i=0;(c=getchar())!='#';i++)
    {
        if(c=='0') ++ch[0];
        else if(c=='1') ++ch[1];
        else if(c=='2') ++ch[2];
        else if(c=='3') ++ch[3];
        else if(c=='4') ++ch[4];
        else if(c=='5') ++ch[5];
        else if(c=='6') ++ch[6];
        else if(c=='7') ++ch[7];
        else if(c=='8') ++ch[8];
        else if(c=='9') ++ch[9];
        else if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) ++ch[10];
        else ++ch[11];
    }
    for(i=0;i<12;i++){
        if(i<10) printf("Number %d: %d\n",i,ch[i]);
        else if(i==10) printf("characters: %d\n",ch[i]);
        else printf("other: %d\n",ch[i]);
    }
}
