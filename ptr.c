#include<stdio.h>
int main()
{
	int a =10,b;
/*constant pointer
	int  *const ptr = &a;
	printf( "Value pointed to by ptr: %d\n", *ptr);
	printf( "Address ptr is pointing to: %p\n\n", ptr);
	//	ptr = &b;
     *ptr = 8;
	printf( "Value pointed to by ptr: %d\n", *ptr);
	printf( "Address ptr is pointing to: %p\n", ptr);
*/	

/*pointer constant
	 const int *ptr = &a;
	printf( "Value pointed to by ptr: %d\n", *ptr);
	printf( "Address ptr is pointing to: %p\n", ptr);
		ptr = &b;
    // *ptr = 8;
	printf( "Value pointed to by ptr: %d\n", *ptr);
	printf( "Address ptr is pointing to: %p\n", ptr);
*/
	
/*const pointer to constant integer
	const int *const ptr = &a;
	a++;
	printf("%d",a);//it gives incremented value bcz pointet pointing to variable cant be incremented but
				variable can be incremented
	printf( "Value pointed to by ptr: %d\n", *ptr);
	printf( "Address ptr is pointing to: %p\n", ptr);
    //ptr = &b;
    //*ptr = 8; 
 */
}

