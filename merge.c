/**Sort a set of n numbers using merge sort --not optmized**/
#include <stdio.h>
#include <stdlib.h>

//Merge two halves of the array
void mergeS(int *a, int n) {
    int i, j, k, half;
    half = n/2;

    int *temp = (int*)malloc(sizeof(int)*n);
    if (!temp) exit(1);

    i = 0;
    j = half;
    k = 0;

    while (i < half && j < n) {
        if (a[i] > a[j]) {
            temp[k] = a[j];
            ++j;
        } else {
            temp[k] = a[i];
            ++i;
        }
        ++k;
    }
        if ( i == half) {
            while(j < n) {
                temp[k] = a[j];
                ++k;
                ++j;
            }

        }
            else {
                    while (i < half) {
                    temp[k] = a[i];
                    ++k;
                    ++i;
                }
            }
        for (i = 0; i < n; ++i) a[i] = temp[i];
        free(temp);
}

void mergeSort(int *a, int n) {
    if (n > 1) {
        int half = n/2;
        mergeSort(a,half);
        mergeSort(a + half, n - half);
        mergeS(a,n);
    }
}

int main(int argc, char **argv) {
	int n, i;

	if( argc != 2 ){
	  fprintf(stderr, "Uso: ./merge N");
	  exit(-1);
	}

	n = atoi(argv[1]);

	int *a = (int*)malloc(sizeof(int)*n);
	if (a == NULL) exit(1);

	read(a,n);
	mergeSort(a,n);

	for(i=0; i<n; i++)
	  printf("%d\n",a[i]);
	free(a);
	return 0;
}


