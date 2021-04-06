/**
 * @file header.h
 * @author Sanath
 * @brief header file for complex number calculations
 * @version 0.1
 * @date 2021-03-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef header_h
#define header_h

/**
 * @brief structure for complex numbers
 * 
 */
typedef struct complex {
float real;
float imag;
} complex;


/**
 * @brief sum of 2 complex numbers
 * 
 * @param a first complex number
 * @param b second complex number
 * @return float sum of the numbers
 */
float sum(complex a , complex b );

/**
 * @brief difference of 2 complex numbers
 * 
 * @param a first complex number
 * @param b second complex number
 * @return float difference of the numbers
 */
float diff(complex a, complex b);

/**
 * @brief product of 2 complex numbers
 * 
 * @param a first complex number
 * @param b second complex number
 * @return float product of the numbers
 */
float mull(complex a, complex b);

/**
 * @brief division of 2 complex numbers
 * 
 * @param a first complex number
 * @param b second complex number
 * @return float division of the numbers
 */
float divi(complex a,complex b);

#endif