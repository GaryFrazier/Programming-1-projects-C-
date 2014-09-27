/*
 Program Name: COP2220 Project 1 - Beyond Hello World

 Author: Gary Frazier

 Description: Read numbers and print out the result of a formula using those numbers

 Input: number1, number2, number3, number4

 Output: Print out the formula and the result of the formula.
		 Print out the sum to two digits of precision and the average of the numbers.
*/

#include <stdio.h>
int main (void)
{
printf("[n00862133@osprey COP2220]$ ./project2\n\nCOP2220 Project 2 - Gary Frazier\n\n");

int number1;
int number2;
float number3;
float number4;
printf("Enter four numbers in the format nnn nnn nnn.nn nnn.nn<enter>:\n");
scanf("%d %d %f %f", &number1, &number2, &number3, &number4);
float result = ((number1 - number4)/number3)*number2;
float sum = number1 + number2 + number3 + number4;
float avg = sum / 4;
printf("\nThe result of the calculation ((%d - %.2f) / %.2f) * %d is %.2f\n\n" , number1 , number4, number3, number2, result);
printf("The sum of the input numbers is:     %.2f\n" , sum);
printf("The average of the input numbers is: %.2f\n\n" , avg);
printf("Have a nice day!\n");
} //main