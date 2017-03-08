#include <stdio.h>
#include <string.h>

#define MEM 32

int main() 
{
  int i;

  float x,array[MEM],buf[MEM];

  memset(buf,0,MEM);
  memset(array,0,MEM);
  memset(array,1,2);

  for(i=2;i<MEM-1;i++)
  {
    array[i]=array[i-2]+array[i-1];
  }

  for(i=0;i<MEM;i++)
  {
    buf[i]=array[i]/array[i-1];
  }

  printf("Phi ~ %f\n",buf[MEM-2]);

}
