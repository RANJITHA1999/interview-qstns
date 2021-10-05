#include <stdio.h>
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	int ch,a,b;
	void (*fptr[10])(int, int) = {add, subtract, multiply};

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	scanf("%d", &ch);
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    (*fptr[ch])(a, b);
    
}
