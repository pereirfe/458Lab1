/* InsertionSort */
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(int argc, char** argv){
  int i, j, buffer;
  int cand; // candidate
  char flag;
  int size = argc-1;
  int* v = (int*)malloc(sizeof(int)*size);
  

  for(i=0; i<size; i++){
    v[i] = atoi(argv[i+1]);
  }
  
  for(i=0; i<size; i++){
    cand = i;
    for(j=i; j<size; j++){
      if( v[j] < v[cand] ){
	cand = j;
      }
    }
    SWAP(v[i], v[cand], buffer);
  }

  for(i=0; i<size; i++){
    printf("%d,", v[i]);
  }

  printf("\b\n");
  return 0;
}
