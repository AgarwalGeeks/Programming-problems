// A simple C program to demonstrate callback 
#include<stdio.h> 

void A(int x) 
{ 
	printf("I am function A\n"); 
	printf("value of x is : %d",x);
} 

// callback function 
void B(void (*ptr)(int)) 
{ 
	(*ptr) (100000); // callback to A 
} 

int main() 
{ 
	void (*ptr)(int) = &A; 
	
	// calling function B and passing 
	// address of the function A as argument 
	B(ptr); 

return 0; 
} 

