#include <stdio.h>
#define CHAR_BIT 8
struct w16_bytes{
    unsigned short byte0:8,byte1:8;
};
struct w16_bits{
    unsigned short b0:1,b1:1,b2:1,b3:1,b4:1,b5:1,b6:1,b7:1,b8:1,b9:1,b10:1,b11:1,b12:1,b13:1,b14:1,b15:1;
};
union w16{
    short i;
    struct w16_bytes byte;
    struct w16_bits bit;
};
int main(void)
{
    union w16 w={0};
    void bit_print(short);
    w.bit.b9=1;
    w.bit.b10=1;
    w.byte.byte0='b';
    printf("w.i=0x%x\n",w.i);
    bit_print(w.i);
    return 0;
}
void bit_print(short num)
{
    int i,shift=sizeof(short)*CHAR_BIT;
    int mask=1<<(shift-1);
    for(i=1;i<=shift;i++)
    {
        putchar(((num&mask)==0)?'0':'1');
        num<<=1;
        if(i%CHAR_BIT==0&&i<shift) putchar(' ');
    }
    putchar('\n');
}
