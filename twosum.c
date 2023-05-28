#include "twosum.h"

int main(int argc, char *argv[])
{
  // silences the unused argument compiler warning
  (void)argc;
  (void)argv;

  //int seed = 31;
  srand(time(NULL));
    
  const int arraySize = 100;
  int64_t numArray[arraySize];
  int64_t target = 9;

  memset(numArray, 0, arraySize * sizeof(int64_t));

  printArray(numArray, arraySize); 
  initArray(numArray, arraySize);
  printArray(numArray, arraySize); 
  //sumTwoOrderN2(target,numArray,arraySize);

  return 0;
}
