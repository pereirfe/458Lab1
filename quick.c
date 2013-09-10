/**Sort a set of n numbers using quick sort --not optmized**/
#include <stdio.h>
#include <stdlib.h>

int partit(int *a, int l, int r) {
    int pivot = a[l];
    int left = l;
    int right = r;
    while(left < right) {
        while(a[left] <= pivot) left++;
        while(a[right] > pivot) right--;
        if (left < right) {
                int t = a[left];
                a[left] = a[right];
                a[right] = t;
        }
    }
    a[l] = a[right];
    a[right] = pivot;
    return right;
}

void quickSort(int *a, int l, int r) {
    int pivot;
    if (l < r) {
        pivot = partit(a,l,r);
        quickSort(a,l,pivot-1);
        quickSort(a,pivot+1,r);
    }
}

int main(int argc, char** argv) {
  int n, i;

	if( argc != 2 ){
	  fprintf(stderr, "Uso: ./quick N");
	  exit(-1);
	}

	n = atoi(argv[1]);

	int *a = (int*)malloc(sizeof(int)*n);
	if (a == NULL) exit(1);

	read(a,n);
	quickSort(a,0,n-1);

	for(i=0; i<n; i++)
	  printf("%d\n",a[i]);
	free(a);
	return 0;
}
