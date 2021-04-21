#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int zahl;   float temp, celsius, farenheit;
	printf("Please, enter the temperature:\t");
	fflush(stdin);
	scanf_s("%f", &temp);

	printf("Please enter the number"
		"\n 1 if you want to convert Celsius to Farenheit"
		"\n 2 if you want to convert Farenheit to Celsius\n");
	fflush(stdin);
	scanf_s("%d", &zahl);


	if (zahl == 1){
		// C nach F
		farenheit = (temp* 1.8) + 32;
		//ºF =ºC * 1.8000 + 32.00
		printf("The given temperature is %f in Fahrenheit.", farenheit);
	}
	else if (zahl == 2){
		// F nach C
		celsius = (temp - 32) / 1.8;
		printf("The given temperature is %f in Celsius.", celsius);
		//ºC =ºF - 32 / 1.8000

	}
	else{
		printf("Something went wrong, please try again.");
	}

	return 0;
}
