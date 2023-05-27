#ifndef TWOSUM_H
#define TWOSUM_H

#include "stdio.h"
#include "stdint.h"
#include "inttypes.h"

#define MIN_ARRAY_SIZE 2
#define MAX_ARRAY_SIZE 10e4
#define MIN_NUMBER     -10e9
#define MAX_NUMBER     10e9

int fillArray(int64_t nArray[], const int size)
{

  return 0;
}


int sumTwoOrderN2(int64_t tar, int64_t nArray[], const int size)
{
  // single line variable declaration for readability
  int i; 
  int j;
  
  printf("target: %"PRId64 "\n", tar);
  printf("array: ");
  
  for(i = 0; i < size; ++i)
  {
    printf("%"PRId64" ", nArray[i]);
  }
  
  printf("\n");

  for(i = 0; i < size; ++i)
  {
    for(j = 0; j < size; ++j)
    {
        
    }
  }
  
  return 0;
}

#endif

