#include "twosum.h"

int main(int argc, char *argv[])
{
  // silences the unused argument compiler warning
  (void)argc;
  (void)argv;

  int seed = 31;
  
  // 10e4
  const int arraySize = 100;
  //const int arraySize = MAX_ARRAY_SIZE;
  int64_t numArray[arraySize];
  int64_t target = 9;

  //srand(time(NULL));
  srand(seed);
  
  if(testArrayConstraints(arraySize))
  {
    return 1;
  }

  memset(numArray, 0, arraySize * sizeof(int64_t));

  //printArray(numArray, arraySize); 
  initArray(numArray, arraySize);
  printArray(numArray, arraySize); 
  sumTwoOrderN2(5767187524, numArray, arraySize);
  sumTwoOrderN2(12261130505, numArray, arraySize);

  return 0;
}
