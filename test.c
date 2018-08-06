#include <stdio.h>
#include <stdlib.h>
#include "shuffle.h"

void print_array(int * array, size_t size){
  printf("[");
  for(unsigned i=0;i<size;i++){
    printf("%d ",array[i]);
  }
  printf("]");
}

int main(){
  int seq[] = {0,1,2,3,4,5,6,7,8,9};
  size_t size =  sizeof(seq)/sizeof(int);
  printf("original sequence: ");
  print_array(seq, size);
  printf("\n");
  shuffle_int(seq, size);
  printf("shuffled sequence: ");
  print_array(seq, size);
  printf("\n");  
  
  return EXIT_SUCCESS;
}
