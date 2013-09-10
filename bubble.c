/* BubbleSort */
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

//#define DEBUG

void read(int *a, int n) {
  int i;
  for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
}



int main(int argc, char** argv){
  int i, buffer;
  char flag;
  int size;
  int* v = (int*)malloc(sizeof(int)*size);
  
  if( argc != 2 ){
    fprintf(stderr, "Uso: ./bubble N");
    exit(-1);
  }

  size = atoi(argv[1]);
  read(v,size);

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
