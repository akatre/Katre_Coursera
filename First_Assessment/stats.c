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
 	unsigned char * dataPtr = test;					// declare and initialize a character pointer variable pointing to the data
  

  /* Statistics and Printing Functions Go Here */


 	// Find maximum value
 	maxVal = find_maximum(dataPtr,SIZE);
 	
 	// Find minimum value
 	minVal = find_minimum(dataPtr,SIZE);
 	
 	// Calculate average
 	meanVal = find_mean(dataPtr,SIZE);
 	
 	// Sort array in descending order before calculating the median
 	sort_array(dataPtr,SIZE);

 	// Find median value
 	medianVal = find_median(dataPtr,SIZE);
 	
 	// Print Statistics
 	print_statistics(minVal,maxVal,meanVal,medianVal);

 	// Print sorted array
 	print_array(dataPtr,SIZE);


}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char minVal, unsigned char maxVal, unsigned char meanVal, unsigned char medianVal){

	printf("Minimum Value in the array is %d\n",minVal);
	printf("Maximum Value in the array is %d\n",maxVal);
	printf("Average Value of the array is %d\n",meanVal);
	printf("Median Value in the array is %d\n\n\n",medianVal);



}

void print_array(unsigned char * ptr, unsigned int arrSize){

	printf("Printing array...\n\n");

	for (int i = 0; i < arrSize; ++i)
	{
		
		printf("Value %d is %d\n", i+1,*(ptr + i));

	}

	printf("\nDone Printing...\n\n");

}


unsigned char find_median(unsigned char * ptr, unsigned int arrSize){

	unsigned char idx, medianVal;

	// If array has odd number of values, pick the middle value, else average n/2 and (n/2)+1 values in the array

	if(arrSize%2 == 0){
		idx = (arrSize + 1)/2;
		medianVal = *(ptr+idx);

	}
	else {
		idx = arrSize/2;
		medianVal = (*(ptr + idx) + *(ptr + idx + 1))/2;

	}

	return medianVal;

}

unsigned char find_mean(unsigned char * ptr, unsigned int arrSize){

	int sumVal = 0;
	unsigned char meanVal = 0;

	for (int i = 0; i < arrSize; ++i)
	{
		
		sumVal += *(ptr+i);

	}
	
	meanVal = sumVal/arrSize;
	return meanVal;

}


unsigned char find_maximum(unsigned char * ptr, unsigned int arrSize){

	unsigned char maxVal = 0;

	for (int i = 0; i < arrSize; ++i)
	{
		
		if (*(ptr+i) > maxVal)
			maxVal = *(ptr+i);
	}
	return maxVal;


}


unsigned char find_minimum(unsigned char * ptr, unsigned int arrSize){

	unsigned char minVal = 255;

	for (int i = 0; i < arrSize; ++i)
	{
		
		if (*(ptr+i) < minVal)
			minVal = *(ptr+i);
	}
	return minVal;


}


void sort_array(unsigned char * ptr, unsigned int arrSize){

	unsigned char i, j, temp;
	for (int i = 0; i < arrSize; i++)
	{
		
		for (int j = 0; j < arrSize-i-1; j++)
		{
		
			if (*(ptr+j) < *(ptr+j+1))
			{

				temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = temp;
			}

		}
	}


	
}
