#include <stdio.h>
void bubble_sort(int *a);
int main(void)
{
    int i,x[10];
    while(1){
        for(i=0;i<10;i++){
            if(scanf("%d",&x[i])==EOF) return 0;
        }
        bubble_sort(x);
    }
    return 0;
}
void bubble_sort(int *a)
{
    int *pa=a;
    int i,j,t,k;
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(*(pa+j)>*(pa+j+1)){
                t=*(pa+j);*(pa+j)=*(pa+j+1);*(pa+j+1)=t;
            }
        }
    }
    for(k=0;k<10;k++){
        if(k<9) printf("%d->",*(pa+k));
        else printf("%d\n",*(pa+k));
    }
}
