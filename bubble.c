/* BubbleSort */
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

//#define DEBUG

int main(int argc, char** argv){
  int i, buffer;
  char flag;
  int size = argc-1;
  int* v = (int*)malloc(sizeof(int)*size);
  
  for(i=0; i<size; i++){
    v[i] = atoi(argv[i+1]);
  }
  
  do{
    flag = 0;
    for(i=1; i<size; i++){
      if( v[i-1] > v[i] ){
	SWAP(v[i-1],v[i],buffer);
	flag=1;
      }
    }
  }while(flag);

  
#ifdef DEBUG
  for(i=0; i<size; i++){
    printf("%d,", v[i]);
  }
  printf("\b\n"); 
#endif

  return 0;
}
