/*
 * Program to check the arguments on the stack.
 * */

#include <stdio.h>

void foo(int a, int b, int c)
{
	printf("a = %d, b = %d, c = %d\n", a, b, c);
}

int main(void) 
{
	int local1, local2;

	local1 = 0;
	local2 = 0;
	/* before making the call to "foo" main saves its base pointer value and the instrunction pointer
	 * onto the stack.
	 * base pointer(%ebp) : helps main keep track of the stack, so that once the method foo returns, main can access its variables and other 
	 * elements on the stack correctly as it was doing before calling the method foo.
	 * instruction pointer (%eip) : */
	foo(1, 2, 3);
	printf("%d, %d\n",local1, local2);
	return 0;
}
