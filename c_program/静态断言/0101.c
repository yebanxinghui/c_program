#include <stdio.h>
//#include <assert.h>
void main()
{
  _Static_assert(sizeof(int)==8,"A 64-bit machine needed!");
}
