#include "shuffle.h"

void shuffle_int(int * arr, size_t size){
  // shuffles integer sequence
  int tmp = 0;
  for(unsigned i=size-1;i>1;i--){
    unsigned j = (unsigned)(((float)rand()/RAND_MAX)*(i+1));
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
  }
}
