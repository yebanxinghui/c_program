#include <stdio.h>
int middle(int x,int y,int z)
{
    if(x<=100&&x>=0&&y<=100&&y>=0&&z<=100&&z>=0){
        if(x==y||x==z) return x;
        else if(y==z&&x!=y) return y;
        else {
            if(x<y&&x>z||x<z&&x>y) return x;
            if(y<z&&y>x||y<x&&y>z) return y;
            else return z;
        }
    }else return 0;
}

int middle(int x,int y,int z);
int main(void)
{
    int A,B,C,i;
    for(i=0;(scanf("%d%d%d",&A,&B,&C))!=EOF;++i){
        if(middle(A,B,C)==A) printf("A:%d\n",middle(A,B,C));
        else if(middle(A,B,C)==B) printf("B:%d\n",middle(A,B,C));
        else printf("C:%d\n",middle(A,B,C));
    }
}

