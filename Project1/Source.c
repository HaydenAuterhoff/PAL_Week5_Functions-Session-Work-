#include <stdio.h>

#define NUM 3

// form 1
void displayArray(int[]); //Pass by Value (What is the argument?)

//form 2
void displayArrayByPointer(int*); //Pass by Reference (What is the argument?)


int main(void)
{
	
	int num[NUM] = { 0,5,10 };

	displayArray(num);

	// int num[3] = { 420, 20, 42 }; 
	displayArray(num);

	// int num[3] = { 420, 20, 42 }
	displayArrayByPointer(num);

	displayArray(num);


	return 0;
}

//Print Array, then change num[1] to a new character
void displayArray(int num[]) //Remember we need to pass a parameter as an argument
{
	for (int i = 0; i < NUM; i++) {

		printf("%d\t", num[i]);

	}
	num[1] = 20;
	num[2] = 42; //num[3] --> not in array (Why we had the exception thrown)
	num[0] = 420;
	//num[2] = 69;

	// After printing the array we are modifying the values.  
} 

// Print Array (Pass by Reference), then change num[1] back to original number in main()
void displayArrayByPointer(int* num) //Remember we need to pass a parameter as an argument
{
	printf("\n");
	for (int j = 0; j < NUM;j++ )
	{
		printf("%d\t", *(num + 1));
	}

	*(num + 1) = 100;
}

//No Returns!