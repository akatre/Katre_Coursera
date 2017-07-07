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
 * @file stats.h 
 * @brief This header files has function declarations for all the functions used by stats.c 
 *
 * Add Extended Description Here
 *
 * @author Aniruddha Katre
 * @date July 7, 2017 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statistics for an array of data
 *
 * This function takes inputs of minimum, maximum, meand and median values of the array and prints them in a formatted display
 *
 * @param unsigned char minVal minimum value of array to be printed
 * @param unsigned char maxVal maximum value of array to be printed
 * @param unsigned char meanVal average value of the array of data to be printed
 * @param unsigned char medianVal median value of the array of data to be printed
 *
 * @return This function does not return any values
 */
void print_statistics(unsigned char minVal, unsigned char maxVal, unsigned char meanVal, unsigned char medianVal);

/**
 * @brief Print array of data
 *
 * This function prints the array of data in a formatted display
 *
 * @param unsigned char * ptr Pointer to the array of data
 * @param unsigned int arrSize Size of the array of data
 *
 * @return This function does not return any value
 */

void print_array(unsigned char * ptr, unsigned int arrSize);

/**
 * @brief This function finds the median value of the data
 *
 * This function takes a character pointer to the array of data as an input and finds the median value of the data
 *
 * @param unsigned char * ptr Pointer to the array of data
 * @param unsigned int arrSize Size of the array of data
 *
 * @return This function returns the median value as a char
 */

unsigned char find_median(unsigned char * ptr, unsigned int arrSize);

/**
 * @brief This function finds the average value of a data set
 *
 * This function takes an char pointer to the data as an input and finds the mean of the data
 *
 * @param unsigned char * ptr Pointer to the array of data
 * @param unsigned int arrSize Size of the array of data
 *
 * @return Returns a char variable containing the average value of the data
 */

unsigned char find_mean(unsigned char * ptr, unsigned int arrSize);

/**
 *@brief This function finds the maximum value of a data set
 *
 * This function takes an char pointer to the data as an input and finds the maximum of the data
 *
 * @param unsigned char * ptr Pointer to the array of data
 * @param unsigned int arrSize Size of the array of data
 *
 * @return Returns a char variable containing the maximum value of the data
 */

unsigned char find_maximum(unsigned char * ptr, unsigned int arrSize);

/**
 * @brief This function finds the minimum value of a data set
 *
 * This function takes an char pointer to the data as an input and finds the minimum of the data
 *
 * @param unsigned char * ptr Pointer to the array of data
 * @param unsigned int arrSize Size of the array of data
 *
 * @return Returns a char variable containing the minimum value of the data
 */

unsigned char find_minimum(unsigned char * ptr, unsigned int arrSize);

/**
 * @brief This function sorts the array of data
 *
 * This function takes an char pointer to the data and sorts it in descending order
 *
 * @param unsigned char * ptr Pointer to the array of data
 * @param unsigned int arrSize Size of the array of data
 *
 * @return Does not return anything
 */

void sort_array(unsigned char * ptr, unsigned int arrSize);

#endif /* __STATS_H__ */
