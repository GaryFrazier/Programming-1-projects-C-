/*
Author: Gary Frazier
Date: 3/28/14
Name: project6.c
This program makes the user input a variable length array and variable x. If any pair of integers in the array add to x, 
the program prints true, and false if otherwise.
*/

#include <stdio.h>

//function declarations
void addArray(int num,int length, int numAry[*]);

int main(void)
{
	//local declarations
	int x;
	int size;
	int i;
	
	
	//get size, x, and make an array
	printf("\nInput an integer, x\n");
	scanf("%d\n", &x);
	printf("\nInput the size of the array you want.\n");
	scanf("%d\n\n", &size);
	
	int ary[size];
	
	//fill array
	for(i = 0; i < size; i++)
	{
		printf("please input the next integer in the array\n");
		scanf("%d\n", &ary[i]);
	}//for
	
	
	//call addArray to print out true or false
	addArray( x ,size, ary);
	return 0;
}//main

//prints true if any pair of ints in array adds to x, and false otherwise

void addArray(int num, int length, int numAry[length])
{
	//local declarations
	int i;
	int j;
	int isTrue = 0;
	
	//for loops checking additions
	for (i = 0; i < length - 1; i++)
	{
		for( j = i + 1 ; j < length ; j++)
		{
			if ( numAry[i] + numAry[j] == num)
				{
					printf("\ntrue\n");
					isTrue = 1;
					break;
				}
		}
	}
	
	//if we did not print true, false is printed
	if (!isTrue)
	{
		printf("\nfalse\n");
	}
	return;
}

//end of program