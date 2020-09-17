// A C program to demonstrate need of strict 
// aliasing 
#include<stdio.h> 

// Value of 'a' can be accessed/modified either 
// through 'a' or through 'b' 
int a = 5; 
int* b = &a; 

int func(double* b) 
{ 
	a = 1; 

	// The below statement modifies 'a' 
	*b = 5.10; 

	return (a); 
} 

int main() 
{ 
	printf("%d", func((double*)&a)); 
	return 0; 
} 
