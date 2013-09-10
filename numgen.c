/* Prints a random numbers' vector of size given */
/* By Fernando Pereira, 05/09/2013               */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 10000

int ord(const void* a, const void* b){
  if(*(int*)a > *(int*)b) return 1;
  return -1;
}


int rev(const void* a, const void* b){
  if(*(int*)a < *(int*)b) return 1;
  return -1;
}


int ale(const void* a, const void* b){
  return 0;
}



int main(int argc, char* argv[] ) {
  int size, i;
  char opt;
  int *v;


  if(argc != 3 ){
    fprintf(stderr, "Uso: ./numgen tamanho tipo\n\t a: aleatorio\n\t b: o: ordenado\n\t r: ordenado reverso\n\n");
    exit(-1);
  }
  

  size = atoi(argv[1]);
  opt = argv[2][0];
  v = (int*)malloc(sizeof(int)*size);

  srand(time(0));

  for(i=0; i<size; i++){
    v[i] = rand()%MAX;
  }
  
  switch(opt){
  case 'a':
    qsort(v,size,sizeof(int),ale);
    break;
  case 'o':
    qsort(v,size,sizeof(int),ord);
    break;
  case 'r':
    qsort(v,size,sizeof(int),rev);
    break;
  default:
    puts("ERRO!!!");
  }

  for(i=0; i<size; i++){
    printf("%d ", v[i]);
  }
  
  printf("\b\n");
}


