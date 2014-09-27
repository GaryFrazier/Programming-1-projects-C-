/*
Program name: project6.c
Author: Gary Frazier
Date: 3/26/14

This program makes the user enter from the keyboard an integer, n, and then n floating-point numbers.
The average of the positive numbers is then calculated and printed.
*/
 
 #include <stdio.h>
 
//main function
int main(void)
{
	//local declarations 
	int n;
	int nPos = 0;
	int i;
	float sum = 0;
	float temp;
	float avg;
	
	//scan for n
	printf("\nPlease input how many numbers you want to calculate the average of.\nNote that only positive numbers will be calculated.\n");
	scanf("\n%d\n", &n);
	
	//loop to fix if n is less than 1.
	
	while(n < 1)
	{
		printf("\nThe integer you input is invalid. Please input an integer of 1 or more.");
		scanf("\n%d\n", &n);
	}
	
	//for loop to input the floats.
	for (i = 1; i <= n; i++)
	{
		//input number
		printf("\nPlease input the next number.");
		scanf("\n%f", &temp);
		
		//add number to sum if it is positive. nPos gains 1 if temp is positive to add to the average count.
		if(temp > 0)
		{
			sum += temp;
			nPos++;
		}
	}
	
	//calculate average of positive numbers.
	avg = (sum / nPos);
	
	//print average.
	printf("\n\nThe average of your numbers is %f", avg);
	
	return 0;
}//main


