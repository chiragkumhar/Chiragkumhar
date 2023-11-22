//PROGRAM - 26 Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float Fahrenheit,Celsius;
	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&Fahrenheit);
	
	Celsius = (Fahrenheit - 32) * 5/9;
	
	printf("Temperature in Celsius %f",Celsius);
	
}
