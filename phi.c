#include <stdio.h>
#include <string.h>

#ifdef __APPLE__
  #define MEM 16
#else
  #define MEM 32
#endif


int main() 
{
  int i;

  float x,array[MEM],buf[MEM];

  memset(buf,0,MEM);
  memset(array,0,MEM);

  for(i=0;i<MEM;i++)
  {
    array[i]=array[i-2]+array[i-1];
  }

  for(i=0;i<MEM;i++)
  {
    buf[i]=array[i]/array[i-1];
  }

  printf("Phi ~ %f\n",buf[MEM-1]);

}
