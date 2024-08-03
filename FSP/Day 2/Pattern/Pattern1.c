#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) printf(".");
		for (j = 1; j <= (2 * (n - i) - 1); j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}