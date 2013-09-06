/* InsertionSort */
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#define DEBUG 0

int main(int argc, char** argv){
  int i, j, k, buffer;
  int aux; // candidate
  char flag;
  int size = argc-1;
  int* v = (int*)malloc(sizeof(int)*size);
  

  for(i=0; i<size; i++){
    v[i] = atoi(argv[i+1]);
  }
  
  for(i=1; i<size; i++){  // Mod: eu tinha feito selection... oops
    for(j=0; j<i; j++){
      if( v[i] < v[j] ){
	aux = v[i];
	for( k=i; k>j; k--){
	  v[k] = v[k-1];
	}
	v[j] = aux;
	break;
      }
    }
  }

#ifdef DEBUG
  for(i=0; i<size; i++){
    printf("%d,", v[i]);
  }
  puts("\b");
#endif
  
  return 0;
}
