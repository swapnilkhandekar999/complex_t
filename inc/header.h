#ifndef __CALC__
#define __CALC__
/**
 * @brief Structure for Complex numbers containing real and imaginary parts
 * 
 */
typedef struct complex
{
    float real;
    float img;
}complex;
/**
 * @brief Structure for error types
 * 
 */
typedef enum error
{
    ERROR_DIV_BY_ZERO=-2,
    ERROR_NULL_PTR=-1,
    SUCCESS=0 
}error;
/**
 * @brief TO ADD TWO COMPLEX NUMBERS
 * 
 * @param a - 1st complex number
 * @param b - 2nd complex number
 * @param sum 
 * @return error 
 */
error sum(complex* a,complex* b,complex* csum);
/**
 * @brief TO SUBTRACT TWO COMPLEX NUMBERS
 * 
 * @param a 
 * @param b 
 * @param diff 
 * @return error 
 */
error diff(complex* a,complex* b, complex* cdiff);
/**
 * @brief TO MULTIPLY TWO NUMBERS
 * 
 * @param a 
 * @param b 
 * @param mul 
 * @return error 
 */
error mul(complex* a,complex* b, complex* cmul);
/**
 * @brief TO DIVIDE TWO NUMBERS
 * 
 * @param a 
 * @param b 
 * @param cdiv 
 * @return error 
 */
error divtest(complex* a,complex* b, complex* cdiv);

#endif