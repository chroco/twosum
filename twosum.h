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

int initArray(int64_t *pArray, const int size)
{
  int i;
  const int64_t upperBound = (int64_t)MAX_NUMBER;
  const int64_t spread = 2 * upperBound;
  int64_t tmp;
  
  printf("%"PRId64"\n", INT64_MAX);
  printf("%"PRId64"\n", upperBound);
  printf("%"PRId64"\n", spread);
  
  for(i = 0; i < size; ++i)
  {
    //tmp = rand() % (spread + 1);
    //tmp = tmp - upperBound; 
   // *(pArray + i) = tmp;
    //*(pArray + i) = rand() % (spread + 1) - upperBound;
    *(pArray + i) = i;
    //*(pArray + i) = ((int64_t)(rand() % (spread + 1)) - upperBound);
  }
  
  return 0;
}

int printArray(int64_t *pArray, const int size)
{
  int i;
  // printf("target: %"PRId64 "\n", tar);
  printf("array:");
  
  for(i = 0; i < size; ++i)
  {
    if(i % 10 == 0)
    {
      printf("\n");
    }

    printf("%"PRId64" ", *(pArray + i));
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

