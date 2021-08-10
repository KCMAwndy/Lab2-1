#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int num, i;
	printf("Enter number : ");
	scanf("%d", &num);
	printf("Factoring Result : ");
	for (i = 2; num>1; i++) {
		if (num % i == 0) {
			//		printf("\n");
			printf("%d", i);
			//		printf("\n\t%d\n",num);	
			num /= i;
			i--;
			if (num > 1) {
				printf(" x ");
			}
		}
	}
	return 0;
}