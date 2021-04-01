#include<stdio.h>
#include "typedef struct complex_t.h"

int main(){
  complex_t num1,num2,res[4];
  num1.real=1;
  num1.imaginary=1;
  num2.real=2;
  num2.imaginary=3;
  
  printf("Complex Calculator");
  
  res[0]=sum(num1,num2);
  res[1]=difference(num1,num2);
  res[2]=multiplication(num1,num2);
  res[3]=division(num1,num2);
  
  for(int i=0;i<4;i++){
  printf("(%f)+(%f)i\n",res[i].real,res[i].imaginary);
  }
}
