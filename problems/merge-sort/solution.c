#include <stdio.h>
#include <stdlib.h>


void merge(int *arr, int l, int mid, int r) {
    int i, j, k = l;
	int size1 = mid - l + 1;
	int size2 = r - mid;

	int *temp1 = (int *)malloc(size1 * sizeof(int));
	int *temp2 = (int *)malloc(size2 * sizeof(int));

	for (int i = 0; i < size1; i++) temp1[i] = arr[i + l];
	for (int i = 0; i < size2; i++) temp2[i] = arr[i + mid + 1];
	
	i = j = 0;
	while (i < size1 && j < size2) {
		if (temp1[i] > temp2[j]) arr[k++] = temp1[i++];
		else arr[k++] = temp2[j++];
	}
	
	while (i < size1) arr[k++] = temp1[i++];
	free(temp1);

	while (j < size2) arr[k++] = temp2[j++];
	free(temp2);
}


void mergeSort(int *arr, int l, int r) {
	if (r <= l) {
		return;
	}
	int mid = l + (r - l) / 2;
	
	mergeSort(arr, l, mid);
	mergeSort(arr, mid + 1, r);
	merge(arr, l, mid, r);
} 


int main(){    	
    // Seu código vai aqui
	int n;
	scanf("%d", &n);
	
	int *arr = (int *)malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	mergeSort(arr, 0, n - 1);
	
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);

	free(arr);
    return 0;
}
