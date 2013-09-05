/* Prints a random numbers' vector of size given */
/* By Fernando Pereira, 05/09/2013               */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 10000

int main(int argc, char* argv[] ) {
  int size, i;
  int *v;


  if(argc != 2 ){
    fprintf(stderr, "Tamanho do vetor ausente\n");
    exit(-1);
  }
  
  size = atoi(argv[1]);
  
  srand(time(0));

  for(i=0; i<size; i++){
    printf("%d,", rand()%MAX);
  }
  printf("\b\n");
}
