/* 
Program Name: Project 4 - Making Decisions
Author: Gary Frazier
Date: 3/1/14

This program takes the coefficients from a quadratic formula and outputs the results of the formula.
The user is informed if the roots are complex.
*/

#include <stdio.h>
#include<math.h>

//function declarations:
void posDelta(float del, float numA, float numB);
void zeroDelta(float numA, float numB);
void negDelta(void);


int main(void)
{
    //local declarations
	float a;
	float b;
	float c;
	float delta;
	float x1;
	float x2;
	
	//Input a, b, c
	printf("\nPlease input the coefficients of the function ax^2 + bx + c in the form nnn.nn nnn.nn nnn.nn\n");
	scanf("%f %f %f\n\n", &a, &b, &c);
	
	//set delta
	delta = ((b * b) - (4.00 * a * c));
	
	//if statement determining which function to use.
	if (delta > 0)
	{
		posDelta(delta, a, b);
	}
	else if(delta < 0)
	{
		negDelta();
		
	}
	else
	{
		zeroDelta(a, b);
	}
	
	return 0;
} //main

//function declarations.

//Prints two values if delta is positive.
void posDelta(float del, float numA, float numB)
{
	//local declarations
	float x1;
	float x2;
	
	//assignment
	x1 = (( -numB + sqrt(del)) / (2.00 * numA));
	x2 = (( -numB - sqrt(del)) / (2.00 * numA));
	
	//print results
	printf("\nThe roots of the equation are %.2f and %.2f.\n", x1, x2);
}

//Prints one value if delta is zero.
void zeroDelta(float numA, float numB)
{
	//local declarations
	float x1;
	
	//assignment
	x1 = ((-numB) / (2.00 * numA));
	
	//prints result
	printf("\nThe root of the equation is %.2f.\n", x1);
	
	
}

//Notifies user of two complex roots if delta is negative.
void negDelta(void)
{
	printf("\nThere are two complex roots.\n");
}


