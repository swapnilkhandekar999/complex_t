typedef struct complex_t {
float real;
float imaginary;
} complex_t;

complex_t sum(complex_t,complex_t);
complex_t difference(complex_t,complex_t);
complex_t multiplication(complex_t,complex_t);
complex_t division(complex_t,complex_t);

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