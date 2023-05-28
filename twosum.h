#ifndef TWOSUM_H
#define TWOSUM_H

#include "time.h"
#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "inttypes.h"
#include "string.h"

#define MIN_ARRAY_SIZE  2
#define MAX_ARRAY_SIZE  10e4
#define MIN_NUMBER      -10e9
#define MAX_NUMBER      10e9
//#define RAND_MODIFIER   2 * MAX_NUMBER + 1  

int initArray(int64_t array[], const int size)
{
  int i;
  const int64_t min = (int64_t)MIN_NUMBER;
  const int64_t max = (int64_t)MAX_NUMBER;
  const int64_t spread = 2 * max + 1;
  int64_t num;
  
  printf("INT64_MAX: %20"PRId64"\n", (int64_t)INT64_MAX);
  printf("RAND_MAX:  %20"PRId64"\n", (int64_t)RAND_MAX);
  printf("min:       %20"PRId64"\n", min);
  printf("max:       %20"PRId64"\n", max);
  printf("spread:    %20"PRId64"\n", spread);
  printf("\n");

  //int randomNumber = rand() % (max - min + 1) + min;
  
  for(i = 0; i < size; ++i)
  {
    num = rand();
    num = (num << 32) | rand();
    array[i] = num % spread - max;
  }
  
  return 0;
}

int printArray(int64_t array[], const int size)
{
  int i;
  // printf("target: %"PRId64 "\n", tar);
  printf("array:");
  
  for(i = 0; i < size; ++i)
  {
    if(i % 5 == 0)
    {
      printf("\n");
    }

    printf("%15"PRId64" ", array[i]);
  }
  
  printf("\n");

  return 0;
}

int sumTwoOrderN2(int64_t tar, int64_t nArray[], const int size)
{
  // single line variable declaration for readability
  int i; 
  int j;
  
  for(i = 0; i < size; ++i)
  {
    for(j = 0; j < size; ++j)
    {
        
    }
  }
  
  return 0;
}

#endif

