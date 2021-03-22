#include<stdio.h>
#include "complex.h"
complex_t sum(complex_t,complex_t);
complex_t difference(complex_t,complex_t);
complex_t multiplication(complex_t,complex_t);
complex_t division(complex_t,complex_t);

int main(){
  complex_t num1,num2,res[4];
  num1.real=1;
  num1.imaginary=1;
  num2.real=2;
  num2.imaginary=3;
  
  res[0]=sum(num1,num2);
  res[1]=difference(num1,num2);
  res[2]=multiplication(num1,num2);
  res[3]=division(num1,num2);
  
  for(int i=0;i<4;i++){
  printf("(%f)+(%f)i\n",res[i].real,res[i].imaginary);
  }
}

complex_t sum(complex_t num1,complex_t num2){
  complex_t result;
  result.real=num1.real+num2.real;
  result.imaginary=num1.imaginary+num2.imaginary;
  return result;
}
complex_t difference(complex_t num1,complex_t num2){
  complex_t result;
  result.real=num1.real-num2.real;
  result.imaginary=num1.imaginary-num2.imaginary;
  return result;
}
complex_t multiplication(complex_t num1,complex_t num2){
  complex_t result;
  result.real=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
  result.imaginary=(num1.real*num2.imaginary)+(num2.real*num1.imaginary);
  return result;
}
complex_t division(complex_t num1,complex_t num2){
  complex_t result;
  result.real=((num1.real*num2.real)+(num1.imaginary*num2.imaginary))/(num2.real*num2.real+num2.imaginary*num2.imaginary);
  result.imaginary=((num2.real*num1.imaginary)-(num1.real*num2.imaginary))/(num2.real*num2.real+num2.imaginary*num2.imaginary);
  return result;
}
