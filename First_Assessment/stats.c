/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Runs basic statisical analysis on data >
 *
 * <Functions in this file calculate basic statistical information such as the average, minimum, maximum, median values of a set of data and print the results
 *  in a formatted display to the command line>
 *
 * @author <Aniruddha Katre>
 * @date <July 7, 2017 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char meanVal, maxVal, minVal, medianVal; // declare variables to hold mean, max, min and median values of the data
  unsigned char * dataPtr = &test[0];				// declare and initialize a character pointer variable pointing to the data

  /* Statistics and Printing Functions Go Here */


}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char minVal, unsigned char maxVal, unsigned char meanVal, unsigned char medianVal){


}

void print_array(unsigned char * ptr, char arrSize){


}

unsigned char find_median(unsigned char * ptr, char arrSize){


}

unsigned char find_mean(unsigned char * ptr, char arrSize){


}

unsigned char find_maximum(unsigned char * ptr, char arrSize){


}

unsigned char find_minimum(unsigned char * ptr, char arrSize){


}

void sort_array(unsigned char * ptr, char arrSize){

	
}