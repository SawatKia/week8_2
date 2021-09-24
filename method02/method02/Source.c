#include<stdio.h>

unsigned long  factorial(int x) {
	printf(" %d ", x);
	if (x != 1) {
		printf(" x ");
	}
	if (x == 1)
		return 1;
	else
		
		return(x * factorial(x - 1));
}

int main() {
	int num;
	unsigned long fact=0 ;
	printf("\n\nEnter number to find factorial: ");
	scanf_s("%d", &num);
	if (num > 0) {
		printf("%d! = ", num);
		fact = factorial(num);
	}
	else {
		printf("!!!!Caution!!!! : Math ERROR!!!\nInvalid value or negative number \nplease try agian\n");
		main();
	}
	printf("\n  ");
	if (num > 9) {
		printf(" ");
	}
	printf(" = % d", fact);
	return 0;
}