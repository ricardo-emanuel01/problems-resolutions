# include <stdio.h>
# include <stdlib.h>

int main(){    	
    // Seu código vai aqui
	int n, temp;
	scanf("%d", &n);
	
	int *arr = (int *)calloc(n, sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		arr[i] += temp;
		if (i == 0) {
			if (temp == 1 && n > 1) {
				arr[i + 1]++;
			}
		} else if (i == n - 1) {
			if (temp == 1 && n > 1) {
				arr[i - 1]++;
			}
		} else {
			if (temp == 1) {
				arr[i - 1]++;
				arr[i + 1]++;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

    free(arr);

    return 0;
}
