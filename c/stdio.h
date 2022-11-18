#include <stdio.h>

int main() {
	int a, b;
	char c;

	a= 10;
	b= 20;

	scanf("%c" , &c);

	if ( a < b  ) {
		printf("a > b = %i\n", a > b);
	}
	if(c>= 'a'   ) {
		printf("c > 32 + %i\n", c > 32);
	}	

	return 0;
}
