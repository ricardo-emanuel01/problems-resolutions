# include <stdio.h>
# include <stdlib.h>


void colorStrip(int *arr, int size, int currentIndex) {
    for (int i = currentIndex + 1; i < size; i++) {
        if (arr[i] != 0) {
            int temp = i - currentIndex;
            if (temp > 9) temp = 9;

            if (arr[i] == -1) {
                arr[i] = temp;
            } else {
                if (temp < arr[i]) {
                    arr[i] = temp;
                }
            }
        }
    }

    for (int i = currentIndex - 1; i > -1; i--) {
        if (arr[i] != 0) {
            int temp = currentIndex - i;
			if (temp > 9) temp = 9;
            if (arr[i] == -1) {
                arr[i] = temp;
            } else {
                if (temp < arr[i]) {
                    arr[i] = temp;
                }
            }
        }
    }
}


int main() {
    int n, temp;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            colorStrip(arr, n, i);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");

    free(arr);

    return 0;
}