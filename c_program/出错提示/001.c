#include <stdio.h>
void error_prompt(int err_code)
{
    char *perror[]={ /*perror�е�ÿ��Ԫ�ض�ָ���ض��ĳ�����ʾ�ַ����� */
            "can't open file!","read error!",
            "write error!","illegal access exception!"};
    printf("error code:%d :%s\n",err_code,perror[err_code]);
}
void main()
{
    int n;
    while(1){
        scanf("%d",&n);          /*n�����뷶Χ��0~3*/
        if(n==-1) break;
        error_prompt(n);
    }
}
