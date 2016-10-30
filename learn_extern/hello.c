
#include <stdio.h>
#include "hello.h"
#include "world.h"
//extern int a;
//extern int world_1;
//void func1(int a);
void main(void){
	printf("Hello World!\n");
	func1(123);
	printf("a is equal to %d\n", a);
	func2();
	printf("world_1 is equal to %d\n", world_1);
}




int a = 0;
int b = 1;

void func1(int a){
	int c = b;
	printf("This is a equal to %d and c is %d\n", a, c);
}
