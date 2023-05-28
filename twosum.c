#include "twosum.h"

int main(int argc, char *argv[])
{
  // silences the unused argument compiler warning
  (void)argc;
  (void)argv;

  int seed = 31;
  srand(seed);

  printf("%"PRId64"\n",(int64_t)MIN_NUMBER);
  printf("%"PRId64"\n",(int64_t)MAX_NUMBER);
    
  const int arraySize = 100;
  int64_t numArray[arraySize];
  int64_t target = 9;

  memset(numArray, 0, 100 * sizeof(int64_t));

  //initArray(numArray, arraySize);
  printArray(numArray, arraySize); 
  //sumTwoOrderN2(target,numArray,arraySize);

  return 0;
}
