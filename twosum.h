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

int testArrayConstraints(const int size)
{
  if(size < (int)MIN_ARRAY_SIZE || size > (int)MAX_ARRAY_SIZE)
  {
    printf("Error, array size out of bounds!\n");
  }

  return 0;
}

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

int isIndexUsed(int index, int64_t iArray[], int iCounter, const int iSize)
{
  int i;

  if(iCounter > iSize)
  {
    return -1;
  }
  
  for(i = 0; i < iCounter; ++i)
  {
    if(index == iArray[i])
    {
      return 1;
    }
  }
  
  return 0;
}

int sumTwoOrderN2(int64_t tar, int64_t array[], const int size)
{
  // single line variable declaration for readability
  int i; 
  int j;
  int isFound = 0;
  const int indexSize = 1000;
  int indexCounter = 0;
  int64_t usedIndexes[indexSize];
  int iUsed = 0;
  int jUsed = 0;

  memset(usedIndexes, 0, indexSize * sizeof(int));
  
  for(i = 0; i < size; ++i)
  {
    for(j = 0; j < size; ++j)
    {
      if(isFound)
      {
        iUsed = isIndexUsed(i, usedIndexes, indexCounter, indexSize);
        jUsed = isIndexUsed(j, usedIndexes, indexCounter, indexSize);
        
        if(iUsed < 0 || jUsed < 0)
        {
          printf("Error, cowardly running away!\n");
          return 1;
        }
      }
      
      if(iUsed + jUsed == 0)
      {
        if(array[i] + array[j] == tar)
        {
          isFound = 1;
          usedIndexes[indexCounter] = i;
          ++indexCounter;
          usedIndexes[indexCounter] = j;
          ++indexCounter;

          printf("(%i, %i) ", i, j); 
        }
      }

      iUsed = 0;
      jUsed = 0;
    }
  }
  
  if(isFound == 0)
  {
    printf("No sum of target %"PRId64" found in array!", tar);
  }

  printf("\n");
  
  return 0;
}

#endif

