/**Sort a set of n numbers using quick sort**/
#include <stdio.h>
#include <stdlib.h>

int *alloc(int n) {
	int *a;
	a = (int*)malloc(n*sizeof(int));
	if (a == NULL) exit(1);
	return a;
}

void read(int *a, int n) {
	int i;
	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);

}

void print(int *a, int n) {
	int i;
	for(i = 0; i < n; i++)
		printf("%d\n",a[i]);
}

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
	int n;

	if( argc != 2 ){
	  fprintf(stderr, "Uso: ./quick N");
	  exit(-1);
	}

	n = atoi(argv[1]);

	int *a;
	a = alloc(n);
	read(a,n);
	quickSort(a,0,n-1);
	//print(a,n);
	free(a);
	return 0;
}
