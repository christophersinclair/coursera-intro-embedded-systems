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
 * @brief Function declarations for the stats program
 *
 * @author Christopher Sinclair
 * @date 12/3/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
/**
 * @brief Prints the statistics of the passed array
 *
 * This function takes as an input an an 
 * n-element data array and a 32-bit integer
 * representing the array's size and prints
 * statistics of the array including minimum,
 * maximum, mean, and median.
 *
 * @param array The array to print statistics of
 * @param size  The size of the array
 *
 * @return None
 */
void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Prints the elements of a given array to the screen
 *
 * This function takes as an input an 
 * n-element data array and a 32-bit integer
 * representing the array's size and prints
 * the elements of the array to the screen.
 *
 * @param array The array to print elements of
 * @param size  The size of the array
 *
 * @return None
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Calculates the median of a given array
 * 
 * This function takes as an input an
 * n-element data array and a 32-bit integer
 * representing the array's size and returns
 * the median value of the array's values.
 * 
 * @param array The array to print elements of
 * @param size  The size of the array
 * 
 * @return unsigned char
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Calculates the mean of a given array
 * 
 * This function takes as an input an
 * n-element data array and a 32-bit integer
 * representing the array's size and returns
 * the mean value of the array's values.
 * 
 * @param array The array to print elements of
 * @param size  The size of the array
 * 
 * @return unsigned char
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Finds the maximum of a given array
 * 
 * This function takes as an input an
 * n-element data array and a 32-bit integer
 * representing the array's size and returns
 * the maximum value of the array's values.
 * 
 * @param array The array to print elements of
 * @param size  The size of the array
 * 
 * @return unsigned char
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Finds the minimum of a given array
 * 
 * This function takes as an input an
 * n-element data array and a 32-bit integer
 * representing the array's size and returns
 * the minimum value of the array's values.
 * 
 * @param array The array to print elements of
 * @param size  The size of the array
 * 
 * @return unsigned char
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Sorts a given array from largest to smallest
 * 
 * This function takes as an input an
 * n-element data array and a 32-bit integer
 * representing the array's size. It will modify
 * the passed in array and sort from largest value
 * to smallest value (zeroth element is the largest,
 * and the last element (n-1) is the smallest).
 * Algorithm used: Bubble Sort
 * 
 * @param array The array to print elements of
 * @param size  The size of the array
 * 
 * @return None
 */
void sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
