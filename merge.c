/**Sort a set of n numbers using merge sort --not optmized**/
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
	int n = argc - 2;
	int *a = (int*)malloc(sizeof(int)*n);
	if (a == NULL) exit(1);
	int i;
  	for(i=0; i<n; i++)
    		a[i] = atoi(argv[i+2]);;
	mergeSort(a,n);
	for(i=0; i<n; i++)
		printf("%d\n",a[i]);
	free(a);
	return 0;
}
