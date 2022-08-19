// This is a Temperature converter Fahrenheit to Celsius and Celsius to Fahrenheit

#include <stdio.h>

int main(void)
{
	double Fahrenheit, Celsius;
	int option;

	printf("Enter an option given below\n");
	printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
	scanf_s("%d", &option);

	if (option == 1)
	{
		printf("Enter Fahrenheit Temperature: ");
		scanf_s("%lf", &Fahrenheit);
		Celsius = 5.0 / 9.0 * (Fahrenheit - 32);
		printf("Celsius:%.2lf\n", Celsius);
	}
	else if (option == 2)
	{
		printf("Enter Celsius Temperature: ");
		scanf_s("%lf", &Celsius);
		Fahrenheit = ((9.0 / 5.0) * Celsius) + 32;
		printf("Fahrenheit:%.2lf \n", Fahrenheit);
	}
	else
	{
		printf("Enter Correct option\n");
	}
}