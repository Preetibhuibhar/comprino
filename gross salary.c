#include <stdio.h>

int main( ) {
  float bs, hra, da, t,i;
  float gs;
  scanf("%f", &t);
  for(i = 1; i<= t;i++){
  scanf("%f", &bs);
  if(bs<1500){
   hra = 0.1 * bs;
   da = 0.9 * bs;
  }
  else{
   hra = 500;
   da = 0.98 * bs;
  }
  gs = bs + hra + da;
  printf("%.2f\n", gs); //GROSS
  }
  return 0;
}
