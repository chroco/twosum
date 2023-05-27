#include "twosum.h"

int main(int argc, char *argv[])
{
  // silences the unused argument compiler warning
  (void)argc;
  (void)argv;

  //printf("%"PRId64"\n",MIN_NUMBER);
  printf("%"PRId64"\n",MAX_NUMBER);
    
  const int arraySize = 4;
  int64_t numArray[] = {2, 7, 11, 15};
  //int64_t numArray[arraySize];
  int64_t target = 9;

  sumTwoOrderN2(target,numArray,arraySize);
  //sumTwoOrderN2(target,numArray,arraySize);

  return 0;
}
