#include<stdio.h>
#include "complex.h"
typedef struct complex_t {
float real;
float imaginary;
} complex_t
complex_t sum(complex_t,complex_t);
complex_t difference(complex_t,complex_t);
complex_t multiplication(complex_t,complex_t);
complex_t division(complex_t,complex_t);

int main(){
  complex_t num1,num2;
  num1.real=1;
  num1.imaginary=1;
  num2.real=2;
  num2.imaginary=3;
  
  sum(complex_t,complex_t);
  difference(complex_t,complex_t);
  multiplication(complex_t,complex_t);
  division(complex_t,complex_t);
}
