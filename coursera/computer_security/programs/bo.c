#include <stdio.h>
int main(void) {
	char arr[10] = {1,2,3,4,5,6,7,8,9,0};
	char a = 'Z';
	arr[2] = 'A';
	printf("arr = %c\n", arr[20]);
	printf("a = %d\n", a);
	return 0;
}
