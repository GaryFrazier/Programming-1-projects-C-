/* 
Program Name: Project 3 - Functions
Author: Gary Frazier
Date: 2/22/14

This program converts Celsius to Fahrenheit and Fahrenheit to Celsius.
The user inputs a degree in centigrade then a degree in Fahrenheit.
*/

#include <stdio.h>

//function declarations:
float fah(float C);
float cel(float F);

int main(void)
{
	//Local Declarations
	float degreeC;
	float degreeF;
	
	//Input of degrees
	printf("\nHello, this program converts Celsius to Fahrenheit and vice-versa.\nPlease input a degree in Celsius, then a degree in Fahrenheit.\n");
	scanf("%f %f\n\n" , &degreeC , &degreeF);
	
	//conversion functions
	fah(degreeC);
	cel(degreeF);
	
	return 0;
} //main

//This function converts Celsius to Fahrenheit.
float fah(float C)
{
	float newDegF = (32 + C * 9.00 / 5.00);
	printf("%.2f in degrees Celsius is %.2f in degrees Fahrenheit.\n" , C , newDegF);
}


//This function converts Fahrenheit to Celsius
float cel(float F)
{
	float newDegC = ((F - 32) * (5.00 / 9.00));
	printf("%.2f in degrees Fahrenheit is %.2f in degrees Celsius.\n" , F , newDegC);
}
