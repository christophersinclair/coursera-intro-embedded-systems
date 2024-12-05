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
 * @file stats.c
 * @brief Function implementations for the stats program
 *
 * A program that can analyze an array of unsigned char data 
 * items and report analytics on the maximum, minimum, mean, 
 * and median of the data set. In addition, it will reorder 
 * this data set from large to small.
 *
 * @author Christopher Sinclair
 * @date 12/3/24
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

  printf("Raw input:\n");
  print_array(test, SIZE);
  printf("--------------\n");

  printf("Sorted array:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("--------------\n");

  print_statistics(test, SIZE);
  
}

void print_statistics(unsigned char *array, unsigned int size) {
  printf("Median: %d\n", find_median(array, size));
  printf("Mean: %d\n", find_mean(array, size));
  printf("Maximum: %d\n", find_maximum(array, size));
  printf("Minimum: %d\n", find_minimum(array, size));
}

void print_array(unsigned char *array, unsigned int size) {
  for (int i = 0; i < size; i++) {
    printf("Value of array at index %d: %d\n", i, array[i]);
  }
}

unsigned char find_median(unsigned char *array, unsigned int size) {  
  sort_array(array, size);
  return array[size/2];
}

unsigned char find_mean(unsigned char *array, unsigned int size) {
  unsigned int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }

  return sum/size;
}

unsigned char find_maximum(unsigned char *array, unsigned int size) {
  sort_array(array, size);
  return array[0];
}

unsigned char find_minimum(unsigned char *array, unsigned int size) {
  sort_array(array, size);
  return array[size-1];
}

void sort_array(unsigned char *array, unsigned int size) {
  for (unsigned int i = 0; i < size - 1; i++) {
    for (unsigned int j = 0; j < size - 1 - i; j++) {
      if (array[j] < array[j+1]) {
        unsigned char temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}
