#include <stdio.h>
void error_prompt(int err_code)
{
    char *perror[]={ /*perror中的每个元素都指向特定的出错提示字符串。 */
            "can't open file!","read error!",
            "write error!","illegal access exception!"};
    printf("error code:%d :%s\n",err_code,perror[err_code]);
}
void main()
{
    int n;
    while(1){
        scanf("%d",&n);          /*n的输入范围是0~3*/
        if(n==-1) break;
        error_prompt(n);
    }
}
